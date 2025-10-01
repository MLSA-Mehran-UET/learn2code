/// Represents the entire graph.
struct Graph {
    // We store all nodes in a vector. The node's ID is its index in the vector.
    nodes: Vec<Node>,
}

/// Represents a single node in the graph.
struct Node {
    // The neighbors are stored as a list of IDs (indices into the graph's nodes vector).
    neighbors: Vec<usize>,
}

impl Graph {
    /// Creates a new, empty graph.
    fn new() -> Self {
        Graph { nodes: Vec::new() }
    }

    /// Adds a new node to the graph and returns its ID.
    fn add_node(&mut self) -> usize {
        let id = self.nodes.len();
        self.nodes.push(Node {
            neighbors: Vec::new(),
        });
        id
    }

    /// Adds an undirected edge between two nodes.
    fn add_edge(&mut self, node1_id: usize, node2_id: usize) {
        if node1_id < self.nodes.len() && node2_id < self.nodes.len() {
            self.nodes[node1_id].neighbors.push(node2_id);
            self.nodes[node2_id].neighbors.push(node1_id);
        }
    }
}

/// A recursive helper function for the DFS traversal.
fn dfs_recursive(graph: &Graph, current_id: usize, visited: &mut Vec<bool>) {
    // Mark the current node as visited and process it.
    visited[current_id] = true;
    print!("{} ", current_id);

    // Recur for all adjacent vertices that haven't been visited yet.
    for &neighbor_id in &graph.nodes[current_id].neighbors {
        if !visited[neighbor_id] {
            dfs_recursive(graph, neighbor_id, visited);
        }
    }
}

/// The main DFS function that initializes the search.
fn dfs(graph: &Graph, start_node_id: usize) {
    if start_node_id >= graph.nodes.len() {
        println!("Error: Start node does not exist.");
        return;
    }

    // A boolean vector to track visited nodes.
    let mut visited = vec![false; graph.nodes.len()];
    
    println!("DFS Traversal Order:");
    dfs_recursive(graph, start_node_id, &mut visited);
    println!(); // Add a newline at the end.
}


fn main() {
    let mut graph = Graph::new();

    // Create 8 nodes, with IDs from 0 to 7.
    for _ in 0..8 {
        graph.add_node();
    }

    // Add edges to create the same graph structure.
    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(1, 3);
    graph.add_edge(1, 4);
    graph.add_edge(2, 4);
    graph.add_edge(3, 5);
    graph.add_edge(4, 5);
    graph.add_edge(6, 7); // A disconnected component

    let start_node = 0;
    println!("Starting DFS from node {}", start_node);
    dfs(&graph, start_node);
}

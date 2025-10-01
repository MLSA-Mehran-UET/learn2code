use std::collections::VecDeque;


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
        // Ensure nodes exist before adding an edge
        if node1_id < self.nodes.len() && node2_id < self.nodes.len() {
            self.nodes[node1_id].neighbors.push(node2_id);
            self.nodes[node2_id].neighbors.push(node1_id);
        }
    }
}

/// Performs BFS on our custom graph structure.
fn bfs(graph: &Graph, start_node_id: usize) {
    if start_node_id >= graph.nodes.len() {
        println!("Error: Start node does not exist.");
        return;
    }

    // A queue for the nodes to visit.
    let mut queue = VecDeque::new();
    // A boolean vector to track visited nodes. This is more efficient
    // than a HashSet when node IDs are dense indices (0, 1, 2, ...).
    let mut visited = vec![false; graph.nodes.len()];

    // Start the search from the given node ID.
    queue.push_back(start_node_id);
    visited[start_node_id] = true;

    println!("BFS Traversal Order:");

    while let Some(current_id) = queue.pop_front() {
        print!("{} ", current_id);

        // Iterate over the neighbors of the current node.
        for &neighbor_id in &graph.nodes[current_id].neighbors {
            // If the neighbor hasn't been visited, mark it and add to the queue.
            if !visited[neighbor_id] {
                visited[neighbor_id] = true;
                queue.push_back(neighbor_id);
            }
        }
    }
    println!(); // Add a newline at the end.
}


fn main() {
    let mut graph = Graph::new();

    // Create 8 nodes, with IDs from 0 to 7.
    for _ in 0..8 {
        graph.add_node();
    }

    // Add edges to create the same graph structure as before.
    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(1, 3);
    graph.add_edge(1, 4);
    graph.add_edge(2, 4);
    graph.add_edge(3, 5);
    graph.add_edge(4, 5);
    graph.add_edge(6, 7); // A disconnected component

    let start_node = 0;
    println!("Starting BFS from node {}", start_node);
    bfs(&graph, start_node);
}
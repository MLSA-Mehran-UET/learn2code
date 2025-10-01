// A node in the binary tree.
struct Node {
    value: i32,
    // We use Option<Box<Node>> to allow for nullable, heap-allocated children.
    // Box<T> allows us to have a recursive type with a known size.
    left: Option<Box<Node>>,
    right: Option<Box<Node>>,
}

// A simple representation of the tree itself.
struct BinaryTree {
    root: Option<Box<Node>>,
}


/// A recursive helper function to perform the in-order traversal.
fn in_order_recursive(node: &Option<Box<Node>>, result: &mut Vec<i32>) {
    // Check if the current node exists.
    if let Some(current_node) = node {
        // 1. Traverse the left subtree.
        in_order_recursive(&current_node.left, result);

        // 2. Visit the root node.
        result.push(current_node.value);

        // 3. Traverse the right subtree.
        in_order_recursive(&current_node.right, result);
    }
}

/// The public function to start the in-order traversal.
pub fn in_order_traversal(tree: &BinaryTree) -> Vec<i32> {
    let mut result = Vec::new();
    in_order_recursive(&tree.root, &mut result);
    result
}


fn main() {
    // Manually construct a sample binary tree.
    //      4
    //     / \
    //    2   5
    //   / \
    //  1   3
    let tree = BinaryTree {
        root: Some(Box::new(Node {
            value: 4,
            left: Some(Box::new(Node {
                value: 2,
                left: Some(Box::new(Node {
                    value: 1,
                    left: None,
                    right: None,
                })),
                right: Some(Box::new(Node {
                    value: 3,
                    left: None,
                    right: None,
                })),
            })),
            right: Some(Box::new(Node {
                value: 5,
                left: None,
                right: None,
            })),
        })),
    };

    let traversal_result = in_order_traversal(&tree);

    println!("In-order traversal result: {:?}", traversal_result);
}

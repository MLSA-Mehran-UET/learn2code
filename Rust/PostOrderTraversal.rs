// ## The Data Structures ##

// A node in the binary tree.
struct Node {
    value: i32,
    // Option<Box<Node>> allows for nullable, heap-allocated children.
    left: Option<Box<Node>>,
    right: Option<Box<Node>>,
}

// Represents the tree itself.
struct BinaryTree {
    root: Option<Box<Node>>,
}

// ## Implementation ##

/// A recursive helper function for the post-order traversal.
fn post_order_recursive(node: &Option<Box<Node>>, result: &mut Vec<i32>) {
    // Check if the current node exists.
    if let Some(current_node) = node {
        // 1. Traverse the left subtree.
        post_order_recursive(&current_node.left, result);

        // 2. Traverse the right subtree.
        post_order_recursive(&current_node.right, result);

        // 3. Visit the root node last.
        result.push(current_node.value);
    }
}

/// The public function to start the post-order traversal.
pub fn post_order_traversal(tree: &BinaryTree) -> Vec<i32> {
    let mut result = Vec::new();
    post_order_recursive(&tree.root, &mut result);
    result
}

// ## Putting It All Together ##

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

    let traversal_result = post_order_traversal(&tree);

    println!("Post-order traversal result: {:?}", traversal_result);
}

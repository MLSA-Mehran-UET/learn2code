use std::fmt;

// A single node in the list
struct Node {
    value: i32,
    next: Option<Box<Node>>,
}

// The list itself, holding the head
pub struct LinkedList {
    head: Option<Box<Node>>,
}

impl LinkedList {
    /// Creates a new, empty linked list.
    pub fn new() -> Self {
        LinkedList { head: None }
    }

    /// Adds a new element to the front of the list.
    pub fn push(&mut self, value: i32) {
        let new_node = Box::new(Node {
            value,
            // .take() replaces self.head with None, giving us the old head
            next: self.head.take(),
        });
        self.head = Some(new_node);
    }

    /// Sorts the linked list.
    pub fn sort(&mut self) {
        // 1. Drain the list into a Vec
        let mut values = Vec::new();
        let mut current = self.head.take();
        while let Some(mut node) = current {
            values.push(node.value);
            current = node.next.take();
        }

        // 2. Sort the Vec
        values.sort();

        // 3. Rebuild the list from the sorted Vec
        // We iterate in reverse to maintain the correct order when pushing to the front.
        for value in values.iter().rev() {
            self.push(*value);
        }
    }
}

// Implement the Display trait for easy printing
impl fmt::Display for LinkedList {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        let mut current = &self.head;
        while let Some(node) = current {
            write!(f, "{} -> ", node.value)?;
            current = &node.next;
        }
        write!(f, "None")
    }
}

fn main() {
    let mut list = LinkedList::new();
    list.push(5);
    list.push(1);
    list.push(8);
    list.push(3);

    println!("Unsorted list: {}", list);

    list.sort();

    println!("Sorted list:   {}", list);
}
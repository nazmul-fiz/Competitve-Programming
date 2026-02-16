#include<bits/stdc++.h>
using namespace std;
// This is an Traversal way to the Binary Tree, 
// And the Interative way of traverse the Tree using BFS 
// 

class Node {
    constructor(value) {
        this.data = value;
        this.left = null;
        this.right = null;
    }
}

// Iterative method to perform level order traversal
function levelOrder(root) {
    if (root === null)
        return [];

    // Create an empty queue for level order traversal
    let q = [];
    let res = [];

    // Enqueue Root
    q.push(root);
    let currLevel = 0;

    while (q.length > 0) {
        let len = q.length;
        res.push([]);

        for (let i = 0; i < len; i++) {
            // Add front of queue and remove it from queue
            let node = q.shift();
            res[currLevel].push(node.data);

            // Enqueue left child
            if (node.left !== null)
                q.push(node.left);

            // Enqueue right child
            if (node.right !== null)
                q.push(node.right);
        }
        currLevel++;
    }
    return res;
}
//Driver Code

    //      5
    //     / \
    //   12   13
    //   /  \    \
    //  7    14   2
    // / \  /  \  / \
    //17 23 27 3  8  11


const root = new Node(5);
root.left = new Node(12);
root.right = new Node(13);

root.left.left = new Node(7);
root.left.right = new Node(14);

root.right.right = new Node(2);

root.left.left.left = new Node(17);
root.left.left.right = new Node(23);

root.left.right.left = new Node(27);
root.left.right.right = new Node(3);

root.right.right.left = new Node(8);
root.right.right.right = new Node(11);

// Perform level order traversal and get the result
const res = levelOrder(root);


for (const level of res) {
        console.log(level.join(' '));
}
# Lowest Common Ancestor in a Binary Search Tree

## Problem Statement
You are given a pointer to the root of a Binary Search Tree (BST) and two node values. You need to return the lowest common ancestor (LCA) of these two values in the BST. The LCA of two nodes `v1` and `v2` is the lowest node that has both `v1` and `v2` as descendants.

Example
Given the BST:
```bash
      4
     / \
    2   7
   / \  /
  1  3 6
```
The LCA of nodes `1` and `7` is `4`.

## Function Description
`lca(root, v1, v2)`
**Parameters:**
 - root: A pointer to the root node of the BST.
 - v1: The value of the first node.
 - v2: The value of the second node.
**Returns:** A pointer to the LCA node of the two given values.

## Approach

**Properties of BST**

In a BST:

- The left subtree of a node contains only nodes with values less than the node's value.
- The right subtree of a node contains only nodes with values greater than the node's value.

## Steps to Find LCA
1. **Identify the Higher and Lower Values:** Determine which of the two given values (`v1` and `v2`) is higher and which is lower.
2. **Traverse the Tree:**
- Start from the root node.
- If the current node's value is between `v1` and `v2`, then this node is the LCA.
- If the current node's value is greater than both `v1` and `v2`, move to the left subtree.
- If the current node's value is less than both `v1` and `v2`, move to the right subtree.
This ensures that we find the LCA efficiently with a time complexity of *O(h)*, where h is the height of the tree.

## Implementation

[solution.py](solution.py)

## Explanation

1. **Class Definitions:**
    - `Node`: Represents a node in the BST with a value (info) and pointers to left and right children.
    - `BinarySearchTree`: Manages the creation of the BST.

2. **Function `lca`**: Implements the logic to find the LCA based on the properties of the BST.

3. **Main Execution:**
    - Reads input values.
    - Constructs the BST.
    - Finds and prints the LCA of the given node values.

This approach leverages the properties of BSTs to efficiently determine the LCA of two nodes.

## Usage
1. **Input:**
    - First line contains an integer `n`, the number of nodes in the tree.
    - Second line contains `n` space-separated integers representing the node values.
    - Third line contains two space-separated integers, `v1` and `v2`.
2. **Output:**
Prints the value of the LCA node.
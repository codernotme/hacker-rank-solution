# Binary Search Tree Insertion

## Problem Statement
You are given a pointer to the root of a binary search tree and values to be inserted into the tree. Insert the values into their appropriate position in the binary search tree and return the root of the updated binary tree.

### Input Format
You are given a function:

```cpp
Node * insert (Node * root, int data) {

}
```

### Constraints
No. of nodes in the tree: ≤ 500

### Output Format
Return the root of the binary search tree after inserting the value into the tree.

### Sample Input
```
        4
       / \
      2   7
     / \
    1   3
```
The value to be inserted is `6`.

### Sample Output
```
         4
       /   \
      2     7
     / \   /
    1   3 6
```

## Solution

[solution.cpp](solution.cpp)

## Explanation

This solution inserts values into their appropriate positions in a binary search tree (BST) and returns the root of the updated BST. The `insert` function takes a pointer to the root of the BST and the value to be inserted, and recursively inserts the value into the appropriate subtree based on the BST property. The `preOrder` function is provided to print the preorder traversal of the tree.
# AVL Tree Implementation

This repository contains the implementation of an AVL tree in C++. An AVL tree is a self-balancing binary search tree, where the difference in heights between the left and right subtrees of any node (balance factor) is maintained to be between -1 and +1. If the balance factor becomes less than -1 or greater than +1, rotations are performed to rebalance the tree.

## Problem Description

An AVL tree (Georgy Adelson-Velsky and Landis' tree, named after the inventors) is a self-balancing binary search tree. In an AVL tree, the heights of the two child subtrees of any node differ by at most one; if at any time they differ by more than one, rebalancing is done to restore this property.

We define the balance factor for each node as:

```
balanceFactor = height(left subtree) - height(right subtree)
```

The balance factor of any node of an AVL tree is in the integer range [-1, +1]. If after any modification in the tree, the balance factor becomes less than -1 or greater than +1, the subtree rooted at this node is unbalanced, and a rotation is needed.

## Code Explanation

The code defines a node structure and implements functions to insert a node into the AVL tree while maintaining its balanced property.

### Node Structure

```cpp
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node;
```

### Helper Functions

- `int getHigh(node* x)`: Calculates the height of a node.
- `int max(int a, int b)`: Returns the maximum of two integers.
- `int blncfac(node* y)`: Computes the balance factor of a node.

### Node Management Functions

- `node* newNode(int val)`: Creates a new node with the given value.
- `node* leftRo(node* root)`: Performs a left rotation on the subtree rooted at `root`.
- `node* rightRo(node* root)`: Performs a right rotation on the subtree rooted at `root`.

### Insert Function

- `node* insert(node* root, int val)`: Inserts a node with the given value into the AVL tree. If the tree becomes unbalanced, it performs the necessary rotations to restore balance.

### Insertion Logic

1. **Base Case**: If the root is `nullptr`, create and return a new node.
2. **Recur Down the Tree**:
   - If `val` is greater than `root->val`, insert it into the right subtree.
   - If `val` is less than `root->val`, insert it into the left subtree.
   - If `val` is equal to `root->val`, return the root (no duplicates allowed).
3. **Update Height**: After insertion, update the height of the current node.
4. **Check Balance**: Calculate the balance factor of the current node.
5. **Rebalance if Needed**:
   - **Left Left Case**: Perform a right rotation.
   - **Right Right Case**: Perform a left rotation.
   - **Left Right Case**: Perform a left rotation followed by a right rotation.
   - **Right Left Case**: Perform a right rotation followed by a left rotation.

## Example Usage

```cpp
node* root = nullptr;
root = insert(root, 10);
root = insert(root, 20);
root = insert(root, 30);
root = insert(root, 40);
root = insert(root, 50);
root = insert(root, 25);
```

This sequence of insertions will automatically balance the tree using rotations, maintaining the AVL tree properties.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License.

---

This `Readme.md` file provides an overview of the AVL tree implementation, including problem description, code explanation, usage example, and contribution guidelines.

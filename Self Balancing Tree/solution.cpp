/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

int getHigh(node * x){ 
    if (x == nullptr){
        return -1;
    }
    return 1 + max(getHigh(x -> left), getHigh(x -> right));
}

int max(int a, int b){
    return (a > b) ? a : b;
}

int blncfac(node * y){
    if (y == nullptr){
        return -1;
    }
    return getHigh(y -> left) - getHigh(y -> right);
}

node* newNode(int val){
    node* res = new node();
    res -> val = val;
    res -> left = nullptr;
    res -> right = nullptr;
    res -> ht = 0;
    return res;
}

node* leftRo(node* root){
    node* y = root -> right;
    node* xl = y -> left;
    y -> left = root;
    root -> right = xl;
    y -> ht = max(getHigh(y -> left), getHigh(y -> right)) + 1;
    root -> ht = max(getHigh(root -> left), getHigh(root -> right)) + 1;
    return y;
}

node* rightRo(node* root){
    node* x = root -> left;
    node* xr = x -> right;
    x -> right = root;
    root -> left = xr;
    x -> ht = max(getHigh(x -> left), getHigh(x -> right)) + 1;
    root -> ht = max(getHigh(root -> left), getHigh(root -> right)) + 1;
    return x;
}

node* insert(node* root, int val){
    if (root == nullptr){
        return newNode(val);
    }
    
    if (val > root -> val){
        root -> right = insert(root -> right, val);
    }else if (val < root -> val){
        root -> left = insert(root -> left, val);
    }else {
        return root;
    }
    root -> ht = max(getHigh(root -> left), getHigh(root -> right)) + 1;
    int tem = blncfac(root);
    if (tem < -1 && val > root -> right -> val){
        return leftRo(root);
    }
    if (tem > 1 && val < root -> left -> val){
        return rightRo(root);
    }
    if (tem > 1 && val > root -> left -> val){
        root -> left = leftRo(root -> left);
        return rightRo(root);
    }
    if (tem < -1 && val < root -> right -> val){
        root -> right = rightRo(root -> right);
        return leftRo(root); 
    }
    return root;
}

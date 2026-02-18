#include<iostream>
#include<algorithm>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    int height;

    Node(int k){
        key = k;
        left = right = nullptr;
        height = 1;
    }
};

int height(Node* n){
    if(n == nullptr)
        return 0;
    return n->height;
}

int getBalance(Node* n){
    if(n == nullptr)
        return 0;
    return height(n->left) - height(n->right);
}

Node* rightRotate(Node* y){
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}

Node* leftRotate(Node* x){
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));

    return y;
}

Node* insert(Node* root, int key){
    if(root == nullptr)
        return new Node(key);

    if(key < root->key)
        root->left = insert(root->left, key);
    else if(key > root->key)
        root->right = insert(root->right, key);
    else
        return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    // LL
    if(balance > 1 && key < root->left->key)
        return rightRotate(root);

    // RR
    if(balance < -1 && key > root->right->key)
        return leftRotate(root);

    // LR
    if(balance > 1 && key > root->left->key){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL
    if(balance < -1 && key < root->right->key){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void inorder(Node* root){
    if(root == nullptr)
        return;

        inorder(root->left);
        cout << root->key << " ";
    inorder(root->right);
}


int main(){
    Node* root = nullptr;

    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,40);
    root = insert(root,50);
    root = insert(root,25);

    cout << "AVL Tree Inserted Successfully" << endl;
    cout << "Inorder Traversal: ";
    inorder(root);
}

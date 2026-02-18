#include <iostream>
using namespace std;

enum Color { RED, BLACK };

struct Node {
    int data;
    Color color;
    Node *left, *right, *parent;

    Node(int val) {
        data = val;
        color = RED;      // New node always RED
        left = right = parent = NULL;
    }
};

class RedBlackTree {
    Node* root;

    // 🔁 LEFT ROTATION
    void leftRotate(Node* node) {

        Node* rightChild = node->right;      // previously y
        node->right = rightChild->left;

        if (rightChild->left != NULL)
            rightChild->left->parent = node;

        rightChild->parent = node->parent;

        if (node->parent == NULL)
            root = rightChild;
        else if (node == node->parent->left)
            node->parent->left = rightChild;
        else
            node->parent->right = rightChild;

        rightChild->left = node;
        node->parent = rightChild;
    }

    // 🔁 RIGHT ROTATION
    void rightRotate(Node* node) {

        Node* leftChild = node->left;        // previously x
        node->left = leftChild->right;

        if (leftChild->right != NULL)
            leftChild->right->parent = node;

        leftChild->parent = node->parent;

        if (node->parent == NULL)
            root = leftChild;
        else if (node == node->parent->left)
            node->parent->left = leftChild;
        else
            node->parent->right = leftChild;

        leftChild->right = node;
        node->parent = leftChild;
    }

    // 🔧 FIX INSERT VIOLATION
    void fixInsert(Node* node) {

        while (node != root && node->parent->color == RED) {

            Node* parent = node->parent;
            Node* grandparent = parent->parent;

            // Parent is LEFT child
            if (parent == grandparent->left) {

                Node* uncle = grandparent->right;

                // 🟥 Case 1: Uncle is RED (Recoloring)
                if (uncle != NULL && uncle->color == RED) {
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    grandparent->color = RED;
                    node = grandparent;
                }
                else {
                    // 🟥 Case 2: Triangle
                    if (node == parent->right) {
                        leftRotate(parent);
                        node = parent;
                        parent = node->parent;
                    }

                    // 🟥 Case 3: Line
                    rightRotate(grandparent);
                    parent->color = BLACK;
                    grandparent->color = RED;
                }
            }
            else {  // Mirror cases

                Node* uncle = grandparent->left;

                if (uncle != NULL && uncle->color == RED) {
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    grandparent->color = RED;
                    node = grandparent;
                }
                else {
                    if (node == parent->left) {
                        rightRotate(parent);
                        node = parent;
                        parent = node->parent;
                    }

                    leftRotate(grandparent);
                    parent->color = BLACK;
                    grandparent->color = RED;
                }
            }
        }

        root->color = BLACK;   // Root must always be BLACK
    }

public:
    RedBlackTree() {
        root = NULL;
    }

    void insert(int val) {

        Node* newNode = new Node(val);
        Node* parent = NULL;
        Node* current = root;

        // 🔹 Normal BST insertion
        while (current != NULL) {
            parent = current;
            if (val < current->data)
                current = current->left;
            else
                current = current->right;
        }

        newNode->parent = parent;

        if (parent == NULL)
            root = newNode;
        else if (val < parent->data)
            parent->left = newNode;
        else
            parent->right = newNode;

        // 🔹 Fix Red-Black violations
        fixInsert(newNode);
    }

    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void display() {
        inorder(root);
        cout << endl;
    }
};

int main() {

    RedBlackTree rbt;

    rbt.insert(10);
    rbt.insert(20);
    rbt.insert(30);
    rbt.insert(15);

    rbt.display();

    return 0;
}

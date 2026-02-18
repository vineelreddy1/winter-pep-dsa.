#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insertBFS(Node* root, int val){

    // If tree is empty
    if(root == NULL){
        return new Node(val);
    }

    // Create queue for BFS
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        // Check left child
        if(temp->left == NULL){
            temp->left = new Node(val);
            return root;
        }
        else{
            q.push(temp->left);
        }

        // Check right child
        if(temp->right == NULL){
            temp->right = new Node(val);
            return root;
        }
        else{
            q.push(temp->right);
        }
    }

    return root;
}

// Level order traversal to verify
void levelOrder(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main(){

    Node* root = NULL;

    root = insertBFS(root, 1);
    root = insertBFS(root, 2);
    root = insertBFS(root, 3);
    root = insertBFS(root, 4);
    root = insertBFS(root, 5);

    cout << "Level Order Traversal: ";
    levelOrder(root);

    return 0;
}

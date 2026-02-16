#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* right;
    Node* left;


    Node(int val){
        data = val;
        right = left = NULL;
    }
};

Node* insert(Node* &root , int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val < root->data){
        insert(root->left,val);
    }
    else{
        insert(root->right,val);
    }

    return root;
}

void print(Node* root)
{
    if(root == NULL){
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);

}



int main() {

    Node* root = NULL;

    insert(root,10);
    insert(root,5);
    insert(root,18);
    insert(root,6);
    insert(root,21);
    insert(root,11);


    print(root);

    

    return 0;
}
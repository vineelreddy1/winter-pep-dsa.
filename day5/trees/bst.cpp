#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
   
};

void insert(Node* &root,int val){
    if(root == NULL){
        root = new Node(val);
        return;
    }

    if(val < root->data){
        insert(root->left,val);
    }
    else{
        insert(root->right,val);
    }

}


void print(Node* root){
    if(root == NULL){
        return;
    }
    print(root->left);
    cout << root->data << " ";
   1
}
void print1(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
void print2(Node* root){
    if(root == NULL){
        return;
    }
    print(root->left);
    print(root->right);
    cout << root->data << " ";
}



int main(){

    Node* root = NULL;

    insert(root,10);
    insert(root,4);
    insert(root,15);
    insert(root,6);
    insert(root,12);
    insert(root,21);
    insert(root,13);
    insert(root,7);

    cout << "in-oRdER: ";
    print(root);
    cout << endl;
    cout << "PRE-oRdER: ";
    print1(root);
    cout << endl;
    cout << "Post-oRdER: ";
    print2(root);
    cout << endl;
}



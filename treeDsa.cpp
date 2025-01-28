#include <iostream>
using namespace std;

#include <iostream>

struct Node {
    int data;
    Node *left, *right;
    Node (int value){
        data = value;
        left = right = NULL;
    }
};
void preorder(Node *temp);
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    preorder(root);
}
void preorder (Node *temp){
    if (temp != NULL){
        cout<<temp->data<<"\t";
        preorder(temp->left);
        preorder(temp->right);
    }
}

void inorder(Node *temp){
    if (temp != NULL){
        inorder(temp->left);
        cout<<temp->data<<"\t";
        inorder(temp->right);
    }
}
void postorder(Node *temp){
    if (temp != NULL){
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data;
    }
}


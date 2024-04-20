#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder(struct Node* root){
    if (root==NULL){
        return ;
    } 
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
// Inorder Traversel
void inorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// Postoder Traversal
void postorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    // root->left->right=new Node(5);
    root->right->left=new Node(5);
    root->right->right=new Node(6);

    // preorder(root);
    // inorder(root);
    postorder(root);
}
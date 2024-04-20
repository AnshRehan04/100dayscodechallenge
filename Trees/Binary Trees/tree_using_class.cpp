#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};


void inorder(Node* root){
    if (root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void preorder(Node * root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

bool isfullbinary(Node* root){
    if(root==NULL){
        return false;
    }
    else if (root->left==NULL && root->right==NULL)
    {
        return true;
    }
    else if (root->left && root->left)
    {
        return isfullbinary(root->left) && isfullbinary(root->right);
    }
    return false;
    
    
}
int main(){
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->left->left=new Node(6);

    // inorder(root);

    // postorder(root);

    // preorder(root);

    // if(isfullbinary(root)){
    //     cout<<"Full binary Tree";
    // }
    // else{
    //     cout<<"Not Full Binary Tree";
    // }
}
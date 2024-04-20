#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* InsertatBst(Node* root ,int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left=InsertatBst(root->left,val);
    }
    else{
        root->right=InsertatBst(root->right,val);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" " ;
    inorder(root->right);
}
int main(){

    Node* root=NULL;
    root=InsertatBst(root,5);
    InsertatBst(root,1);
    InsertatBst(root,3);
    InsertatBst(root,4);
    InsertatBst(root,2);
    InsertatBst(root,7);
    // InsertatBst(root,6);
    inorder(root);
    cout<<endl;
}
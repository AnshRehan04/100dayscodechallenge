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

Node* insertatbst(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    // if val<root->data
    if(val<root->data){
        root->left= insertatbst(root->left,val);
    }
    else{
        root->right= insertatbst(root->right,val);
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

Node* searchatbst(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }

    // data<key
    if (root->data<key)
    {
        return searchatbst(root->right,key);
    }
    
    // ḍata>key
    else{
        return searchatbst(root->left,key);
    }
    
}
int main(){
    Node* root=NULL;
    root=insertatbst(root,5);
    insertatbst(root,1);
    insertatbst(root,3);
    insertatbst(root,4);
    insertatbst(root,2);
    insertatbst(root,7);
    inorder(root);
    cout<<endl;

    if(searchatbst(root,3)==NULL){
        cout<<"key Not exists ";
    }
    else{
        cout<<"Key exists";
    }
}
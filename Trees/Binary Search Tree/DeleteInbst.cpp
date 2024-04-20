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
    if(val<root->data){
        root->left=insertatbst(root->left,val);
    }
    else{
        root->right=insertatbst(root->right,val);
    }
    return root;
}

Node* deleteatbst(Node* root,int key){
    if(key<root->data){
        root->left=deleteatbst(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteatbst(root->right,key);
    }
    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if (root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
    }
}
int main(){
    Node* root=NULL;
    root=insertatbst(root,4);

    insertatbst(root,2);
    insertatbst(root,9);
    insertatbst(root,4);

    deleteatbst(root,4);
}
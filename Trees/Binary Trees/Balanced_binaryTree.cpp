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
int height(Node* root){
    if(root==NULL) return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}

bool Balanced(Node* root){
    if(root==NULL) return true;

    if(abs(height(root->left)-height(root->right))>=1){
        return false;
    };
}
int main(){
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    // root->left->right=new Node(5);
    // root->left->left->left=new Node(6);

    // cout<<height(root);
    cout<<Balanced(root);
}
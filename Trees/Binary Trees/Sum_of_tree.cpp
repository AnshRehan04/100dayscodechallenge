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
int SumBT(Node* root){
    if(root==NULL) return 0;

    return SumBT(root->left)+SumBT(root->right)+root->data;
}
int main(){
    struct Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    // root->left->right=new Node(5);
    root->right->left=new Node(5);
    root->right->right=new Node(6);

    cout<<"Sum is "<<SumBT(root);
}
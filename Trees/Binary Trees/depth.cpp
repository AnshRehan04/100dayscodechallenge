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
int maxdepth(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);

    return 1+max(lh,rh);
    
}
int main(){
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->left->left=new Node(5);

    cout<<"Max depth is "<<maxdepth(root);
}

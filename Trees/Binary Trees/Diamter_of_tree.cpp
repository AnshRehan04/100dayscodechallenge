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
int maxdepth(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);

    return 1+max(lh,rh);
    
}
int calcDiameter(Node* root){
    if(root==NULL) return 0;

    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);

    int currdiamter=lh+rh+1;

    int ldiameter=calcDiameter(root->left);
    int rdiameter=calcDiameter(root->right);

    return max(currdiamter,max(ldiameter,rdiameter));
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
    // postorder(root);

    cout<<"Diameter is "<<calcDiameter(root);
    
}
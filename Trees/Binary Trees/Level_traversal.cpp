#include <iostream>
#include <queue>
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

int Level(Node* root){
    if(root==NULL) return 0;
    return 1+max(Level(root->left),Level(root->right));
}

void levelOrder(Node* root){
    if(!root){
        return ;
    }
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int size=q.size();
        for (int i = 0; i < size; i++)
        {
            Node  *node1=q.front();
            q.pop();
            cout<<node1->data<<" ";
        }
        
    }
    
}
int main(){
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->right->right= new Node(5);

    // cout<<"Level of tree is "<<Level(root);
    levelOrder(root);

}
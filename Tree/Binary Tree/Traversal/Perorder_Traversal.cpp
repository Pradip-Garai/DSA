// Preorder Traversal
#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node *left,*right;
    public:
      Node(int data){
        this->data=data;
        left=right=NULL;
      }
};

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)
      return NULL;

    Node *temp = new Node(x);

    cout<<"Enter Left Child of "<<x<<" : ";
    temp->left = BinaryTree();

    cout<<"Enter Right Child of "<<x<<" : ";
    temp->right = BinaryTree();

    return temp;
}

void preorderTraversal(Node* root){

    if(!root)
      return;

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main(){

    Node *root;
    cout<<"Enter Root Node: ";
    root = BinaryTree();

    //preorder Traversal 
    cout<<"\nPreorder Traversal : ";
    preorderTraversal(root);
    return 0;
}
// Count size of a binary tree method 2
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

int countSize(Node *root){
    if(!root)
       return 0;
    return 1 + countSize(root->left) + countSize(root->right);
}

int main(){

    Node *root;
    cout<<"Enter Root Node: ";
    root = BinaryTree();

    //size of binary tree
    cout<<"\nSize of Tree is : "<<countSize(root);

    return 0;
}
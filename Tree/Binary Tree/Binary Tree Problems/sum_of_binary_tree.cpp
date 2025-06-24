// Sum of a binary tree 
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

int sumOfBinaryTree(Node *root){
    if(!root)
       return 0;
    return (root->data) + (sumOfBinaryTree(root->left)) + (sumOfBinaryTree(root->right));
}

int main(){

    Node *root;
    cout<<"Enter Root Node: ";
    root = BinaryTree();

    //sum of binary tree
    cout<<"\nSum of Tree is : "<<sumOfBinaryTree(root);

    return 0;
}
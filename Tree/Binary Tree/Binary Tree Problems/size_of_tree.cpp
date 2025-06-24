// Count size of a binary tree
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

void countSize(Node *root,int &count){
    if(!root)
       return;
    count++;
    countSize(root->left,count);
    countSize(root->right,count);
}

int main(){

    Node *root;
    cout<<"Enter Root Node: ";
    root = BinaryTree();

    //size of binary tree
    int count = 0;
    countSize(root,count);
    cout<<"\nSize of Tree is : "<<count;

    return 0;
}
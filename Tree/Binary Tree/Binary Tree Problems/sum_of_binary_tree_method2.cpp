// Sum of a binary tree Method 2
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

void sumOfBinaryTree(Node *root,int &sum){
    if(!root)
       return;
    sum+=root->data;
    sumOfBinaryTree(root->left,sum);
    sumOfBinaryTree(root->right,sum);
}

int main(){

    Node *root;
    cout<<"Enter Root Node: ";
    root = BinaryTree();

    //sum of binary tree
    int sum = 0;
    sumOfBinaryTree(root,sum);
    cout<<"\nSum of Tree is : "<<sum;

    return 0;
}
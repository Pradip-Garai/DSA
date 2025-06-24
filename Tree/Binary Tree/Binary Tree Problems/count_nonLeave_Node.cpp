// Count Non Leaves Node of Binary tree
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

void countLeaveNode(Node *root, int &countLeaves){
    if(!root) return;

    if(root->left || root->right)
      countLeaves++;

    countLeaveNode(root->left,countLeaves);
    countLeaveNode(root->right,countLeaves);
}
int main(){

    Node *root;
    cout<<"Enter Root Node: ";
    root = BinaryTree();

    // count Non Leaves Node 
    int countLeaves = 0;
    countLeaveNode(root,countLeaves);
    cout<<"\nTotal Leave Nodes are : "<<countLeaves<<"\n";
    return 0;
}
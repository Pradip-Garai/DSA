// Levelorder Traversal 

#include<iostream>
#include<queue>
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

int main(){

    Node *root;
    cout<<"Enter Root Node: ";
    root = BinaryTree();
    
    //levelorder Traversal 
    cout<<"\nLevelorder Traversal : ";
    queue<Node *>q;
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        cout<<temp->data<<" ";

        if(temp->left!=NULL)
           q.push(temp->left);

        if(temp->right!=NULL)
           q.push(temp->right);

        q.pop();
    }


    return 0;
}
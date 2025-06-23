// Create an Binary Tree
#include <iostream>
#include<queue>

using namespace std;
class Node{
    public:
       int data;
       Node * left,*right;
    public: 
        Node(int value){
            data=value;
            left=right=NULL;
        }
};

int main(){
    queue<Node *>q;

    //create a root
    int Root;
    cout<<"Enter Root Value : ";
    cin>>Root;

    Node *root = new Node(Root);
    q.push(root);

    // create entire Tree
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();

        int leftChild;
        cout<<"Enter Left Child of "<<temp->data<<" : ";
        cin>>leftChild;

        if(leftChild!=-1){
            temp->left = new Node(leftChild);
            q.push(temp->left);
        }

        int rightChild;
        cout<<"Enter Right Child Value "<<temp->data<<" : ";
        cin>>rightChild;

        if(rightChild!=-1){
            temp->right = new Node(rightChild);
            q.push(temp->right);
        }
    };

    return 0;
}
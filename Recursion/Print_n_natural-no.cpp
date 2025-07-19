#include<iostream>
using namespace std;

void display(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    display(n-1);
    cout<<n<<" ";
}

int main(){
    int r;
    cout<<"Enter The Range : ";
    cin>>r;

    display(r);
}
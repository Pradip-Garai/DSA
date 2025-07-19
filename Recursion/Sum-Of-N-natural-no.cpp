#include<iostream>
using namespace std;

int sumOfNatural(int n){
    if(n==1) return n;
    return n+sumOfNatural(n-1);
}

int main(){
    int n;
    cout<<"Enter The Range = ";
    cin>>n;

    cout<<"Sum : "<<sumOfNatural(n);
}
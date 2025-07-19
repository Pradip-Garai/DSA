#include<iostream>
using namespace std;

int squareSum(int n){
   if(n==1) return n;
   return (n*n)+squareSum(n-1);
}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Result : "<<squareSum(n);
    return 0;
}
#include<iostream>
using namespace std;

int possibleWays(int n){
   if(n==2 || n==1 ) return n;
   return possibleWays(n-1)+possibleWays(n-2);
}

int main(){
    int n;
    cout<<"Enter the Number of Stair : ";
    cin>>n;

    cout<<"Posible Way is : "<<possibleWays(n);
    return 0;
}
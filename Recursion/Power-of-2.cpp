#include<iostream>
using namespace std;

int Power(int base, int power){
    if(power==1) return base;
    return base*Power(base,power-1);
}

int main(){
   int b,p;
   cout<<"Enter the Base : ";
   cin>>b;

   cout<<"Enter The Power : ";
   cin>>p;

   cout<<"Result : "<<Power(b,p);

   return 0;
}
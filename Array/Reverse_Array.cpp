//Wap to Reaverse an Array 
#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Enter Array Size : ";
    cin>>s;

    int arr[s];

    cout<<"Enter "<<s<<" Elements in array : ";
    for(int i=0;i<s;i++)
       cin>>arr[i];

    cout<<"Original Array Elements : ";
    for(int i=0;i<s;i++)
       cout<<arr[i]<<" ";

    cout<<"\nReverse Array Elements: ";
    for(int i=s-1;i>=0;i--)
       cout<<arr[i]<<" ";
    return 0;
}
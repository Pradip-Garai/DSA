//Wap to Take input in array and print
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;

    //array Decalaration
    int arr[size];

    cout<<"Enter "<<size<<" Elements in Array : ";
    for(int i=0;i<size;i++)
      cin>>arr[i];

    cout<<"Array Elements are : ";
    for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
    return 0;
}
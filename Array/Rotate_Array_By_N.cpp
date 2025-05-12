//Wap to Rotate An Array by N 
#include<iostream>
using namespace std;

int main(){
   int arr[5]={7,11,8,2,56};

   //print array elements 
   cout<<"Array Elements are : ";
   for(int i=0;i<5;i++)
     cout<<arr[i]<<" ";

    int size=5;

    //Rotate array
    int times;
    cout<<"\nEnter How Many times want to Rotate : ";
    cin>>times;
    int t=times;

    while(times--){
       int temp=arr[size-1];

       for(int i=size-2;i>=0;i--){
           arr[i+1]=arr[i];
       }
       arr[0]=temp;
    }

    cout<<"\nAfter "<<t<<" times Rotation array is : ";
    for(int i=0;i<5;i++)
     cout<<arr[i]<<" ";
    cout<<"\n";

    return 0;
}
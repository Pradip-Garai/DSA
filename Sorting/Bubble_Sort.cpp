//Wap to implement Bubble Sort Algorithm 
#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
      for(int j=0;j<n;j++){
          if(arr[j]>arr[j+1])
            swap(arr[j+1],arr[j]);
      }
   }
}

int main(){
    int s;
    cout<<"Enter Array Size : ";
    cin>>s;

    int arr[s];
    cout<<"Enter "<<s<<" Elements in Array : ";
    for(int i=0;i<s;i++)
       cin>>arr[i];

    //Print Elements Before Sorting 
    cout<<"Before Sorting : ";
    for(int i=0;i<s;i++)
       cout<<arr[i]<<" ";

    //Bubble Sort
    bubbleSort(arr,s);

     //Print Elements After Sorting 
    cout<<"\nAfter Sorting : ";
    for(int i=0;i<s;i++)
       cout<<arr[i]<<" ";

    return 0;
}
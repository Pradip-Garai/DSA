//Wap to implement Selection Sort Algorithm
#include<iostream>
using namespace std;

//Selection Sort Algo
void selectionSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
      int index=i;
      int mini=i;
      for(int j=i+1;j<n;j++){
          if(arr[j]<arr[mini])
            mini=j;
      }
      swap(arr[index],arr[mini]);
   }
}

int main(){
    int s;
    cout<<"Enter The Size of Array : ";
    cin>>s;

    int arr[s];
    cout<<"Enter "<<s<<" Elements in array : ";
    for(int i=0;i<s;i++)
      cin>>arr[i];

    //Print Elements Before Sorting 
    cout<<"Before Sorting : ";
    for(int i=0;i<s;i++)
       cout<<arr[i]<<" ";

    // selection sort
    selectionSort(arr,s);

     //Print Elements After Sorting 
    cout<<"\nAfter Sorting : ";
    for(int i=0;i<s;i++)
       cout<<arr[i]<<" ";
       
    return 0;
}
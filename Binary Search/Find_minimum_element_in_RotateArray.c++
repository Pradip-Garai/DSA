// wap to find minimum element in Rotated Array 

#include<iostream>
using namespace std;

int findMinimum(int arr[],int n){
   int start = 0, end = n-1, ans=0, mid;
   while(start<=end){
      mid = start + (end-start)/2;

      if(arr[mid] >= arr[0])
         start = mid+1;
      
      else{
          ans = mid;
          end = mid-1;
      }
   }

   return ans;
}

int main(){
  int size;
  cout<<"Enter Size of Array  : ";
  cin>>size;
  
  int arr[size];
  cout<<"Enter "<<size<<" Elements in array : ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  int index = findMinimum(arr,size);
  cout<<"Minimum Element : "<<arr[index];
  return 0;
}
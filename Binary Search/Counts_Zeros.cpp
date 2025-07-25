// Find Number of Zeros present in Descending Order Sorted array  
#include<iostream>

using namespace std;

void findOccurance(int arr[],int n){
    int low = 0, high = n-1, mid, first = -1, last = -1;
    int target = 0;

    // find first Occurance of Target Value 
    while(low<=high){
        mid = low + (high-low)/2;
        if(arr[mid]==target){
            first = mid;
            high = mid-1;
        }
        else if(arr[mid]>target)
         low = mid+1;
        else 
           high = mid-1;
          
    }

    low = 0, high = n-1;
     // find last Occurance of Target Value 
    while(low<=high){
        mid = low + (high-low)/2;
        if(arr[mid]==target){
            last = mid;
            low = mid+1;
        }
        else if(arr[mid]>target)
         low = mid+1;
        else 
          high = mid-1;
    }
    
    if(first!=-1 && last!=-1){
      cout<<"Number of  Occurance is:  "<<(last-first)+1;
    }
    else
      cout<<"Number of Occurance is : 0";

}

int main(){
    int size;
    cout<<"Enter The Size of Array : ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter "<<size<<" Elements in array : ";
    for(int i=0;i<size;i++){
      cin>>arr[i];
    }

    findOccurance(arr,size);
    return 0;
}
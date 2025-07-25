// Find Number of  occurance of Target value 
#include<iostream>

using namespace std;

void findOccurance(int arr[],int n, int target){
    int low = 0, high = n-1, mid, first = -1, last = -1;

    // find first Occurance of Target Value 
    while(low<=high){
        mid = low + (high-low)/2;
        if(arr[mid]==target){
            first = mid;
            high = mid-1;
        }
        else if(arr[mid]>target)
         high = mid-1;
        else 
          low = mid+1;
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
         high = mid-1;
        else 
          low = mid+1;
    }
    
    if(first!=-1 && last!=-1){
      cout<<"Number of  Occurance is:  "<<(last-first)+1;
    }
    else
      cout<<"Number of Occurance is : 0";

}

int main(){
    int arr[9]={1,3,4,4,4,4,8,16,22};
    int target ;

    cout<<"Enter Target Value : ";
    cin>>target;

    findOccurance(arr,9,target);
    return 0;
}
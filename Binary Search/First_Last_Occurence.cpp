// Find first and last occurance of Target value 
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

    cout<<"First Occurance of "<<target<<" is : "<<first<<endl;
    cout<<"Last Occurance of "<<target<<" is : "<<last;

}

int main(){
    int arr[8]={1,3,4,4,4,8,16,22};
    int target = 4;
    findOccurance(arr,8,target);
    return 0;
}
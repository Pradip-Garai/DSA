// Search Insert Position
#include<iostream>
using namespace std;

int findPosition(int arr[],int n,int target){
    int start = 0, end = n-1, mid, index=-1;

    while(start<=end){
        mid = start + (end - start)/2;

        if(arr[mid] == target)
          return mid;
        else if(arr[mid] > target){
            index = mid;
            end = mid-1;
        }
        else
          start = mid+1;
    }
    return index;
}
int main(){
    int arr[7]={1,4,6,8,12,20,50};
    int target;
    cout<<"Enter Target Value : ";
    cin>>target;
    
    int ans = findPosition(arr,7,target);
    cout<<"Index : "<<ans;
    return 0;
}
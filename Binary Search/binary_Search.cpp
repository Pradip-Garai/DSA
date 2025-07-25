#include<iostream>
using namespace std;

void binarySearch(int arr[],int n,int key){
    int low = 0, high = n-1;
    bool f = 0;
    while(low<=high){
        int mid = low + (high - low) / 2;

        if(arr[mid]==key){
            cout<<key<<" Found at "<<mid<<" index";
            f=1;
            break;
        }
        else if(arr[mid]>key)
           high=mid-1;
        else
          low=mid+1;
    }

    if(!f)
      cout<<"Data Not Found !!!";
}

int main(){
    int arr[10]={12,15,45,89,92,95,101,250,654,78965};
    int key;
    cout<<"Enter The Data want to search : ";
    cin>>key;

    binarySearch(arr,10,key);
    
}
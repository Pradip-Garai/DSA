//Wap to Find Smallest Element in array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int s;
    cout<<"Enter Array Size : ";
    cin>>s;

    int arr[s];

    cout<<"Enter "<<s<<" Elements in array : ";
    for(int i=0;i<s;i++)
       cin>>arr[i];

    //find minimum 
    int mini=INT32_MAX;
    for(int i=0;i<s;i++){
        if(mini>arr[i])
           mini=arr[i];
    }

    cout<<"Minimum Elements in Array : "<<mini;
    return 0;
}
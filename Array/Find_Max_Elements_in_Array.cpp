//Wap to Find Largest Element in array
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

    //find maximum 
    int max=INT32_MIN;
    for(int i=0;i<s;i++){
        if(max<arr[i])
           max=arr[i];
    }

    cout<<"Maximum Elements in Array : "<<max;
    return 0;
}
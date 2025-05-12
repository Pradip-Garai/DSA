//Wap to calculate Sum of Array Elements 
#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Enter Array Size : ";
    cin>>s;

    int arr[s];

    cout<<"Enter "<<s<<" Elements in array : ";
    for(int i=0;i<s;i++)
       cin>>arr[i];

    int sum=0;
    for(int i=0;i<s;i++)
      sum+=arr[i];

    cout<<"Sum of Array Elements : "<<sum;

    return 0;
}
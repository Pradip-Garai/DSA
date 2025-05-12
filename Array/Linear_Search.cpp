//Wap to implement linear Search Algorithm 
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
    
    int searchElement;
    cout<<"Enter Search Element : ";
    cin>>searchElement;

    //search 
    int flag =0;
    int index=-1;
    for(int i=0;i<s;i++){
        if(searchElement==arr[i]){
            index=i;
            flag=1;
            break;
        }
    }
    if(flag)
       cout<<searchElement<<" Found at "<<index<<" Index";
    else
      cout<<searchElement<<" Not found !!!";
    return 0;
}
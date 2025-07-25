// find square root of target value 
#include<iostream>
using namespace std;

int findSqrt(int target){
    int start = 1, end = target , ans;

    while(start<=end){
        int mid = start + (end - start)/2;

        if((mid*mid)==target)
          return mid;
        else if((mid*mid) > target)
           end = mid-1;
        else{
            ans = mid;
            start = mid+1;
        }
    }

    return ans;
}

int main(){
    int num ;
    cout<<"Enter The Number : ";
    cin>>num;

    cout<<"Sqrt of "<<num<<" is : "<<findSqrt(num);
    return 0;
}
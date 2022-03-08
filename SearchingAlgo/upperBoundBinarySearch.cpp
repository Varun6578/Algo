// Input : 2 3 3 5 5 5 6 6
// Function : last(3)
// Returns : 2

// Function : last(5)
// Returns : 5

// Function : last(4)
// Returns : -1
//std::upper_bound(...)
#include<bits/stdc++.h>
using namespace std;
int upperBound(int arr[],int n,int key){
    int lo=0;int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==key){
            ans=mid;
            while(mid+1<n and arr[mid]==key){
                ans=mid;
                ++mid;
            }
            break;
        }
        if(arr[mid]>key){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return ans;
}
int main(){
   int arr[]={ 2, 3, 3, 5, 5, 5, 6, 6};
   cout<<upperBound(arr,8,3)<<"\n";//returns 1
   cout<<upperBound(arr,8,5)<<"\n";//returns 3
   cout<<upperBound(arr,8,4)<<"\n";//returns -1
}

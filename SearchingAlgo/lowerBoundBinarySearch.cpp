//First occurrence of key (index of array). This is similar to
//std::lower_bound(...)
// Input : 2 3 3 5 5 5 6 6
// Function : first(3)
// Returns : 1

// Function : first(5)
// Returns : 3

// Function : first(4)
// Returns : -1
#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[],int n,int key){
    int lo=0;int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==key){
            ans=mid;
            while(mid-1>0 and arr[mid]==key){
                ans=mid;
                --mid;
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
   cout<<lowerBound(arr,8,3)<<"\n";//returns 1
   cout<<lowerBound(arr,8,5)<<"\n";//returns 3
   cout<<lowerBound(arr,8,4)<<"\n";//returns -1
}

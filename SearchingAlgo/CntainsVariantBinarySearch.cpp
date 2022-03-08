// Input : 2 3 3 5 5 5 6 6
// Function : Contains(4)
// Returns : False

// Function : Contains(5)
// Returns : True
#include<bits/stdc++.h>
using namespace std;
//Array is sorted should think of binary search 
bool contains(int arr[],int n,int key){
    int lo=0;int hi=n-1;
    bool ans=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==key){
            ans=true;
            break;
        }
        if(arr[mid]>key){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}
int main(){
   int arr[]={ 2, 3, 3, 5, 5, 5, 6, 6};
   cout<<contains(arr,8,4)<<"\n";// Returns : False
   cout<<contains(arr,8,5);// Returns : True
}

#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<"\n";
}
int iterativeBinarySearch(int arr[],int lo,int hi, int key){
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==key){
            ans=mid;
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
    int arr[] = {7,8,9,2,6,4,1,3,5};
    sort(arr,arr+9);
    print(arr,9);
    cout << iterativeBinarySearch(arr,0,8,5);
}

#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<"\n";
}
int recursiveBinarySearch(int arr[],int lo,int hi, int key){
    if(lo <= hi){
        int mid = lo + ( hi - lo ) / 2;
        if(arr[mid] == key) return mid;
        if(arr[mid] >  key) return recursiveBinarySearch(arr,lo,mid-1,key);
        else return recursiveBinarySearch(arr,mid+1,hi,key);
    }
    return -1;
}
int main(){
    int arr[] = {7,8,9,2,6,4,1,3,5};
    sort(arr,arr+9);
    print(arr,9);
    cout << recursiveBinarySearch(arr,0,8,4);
}

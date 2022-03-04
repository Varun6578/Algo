#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
//recursiveInsertionSort
void recursiveInsertionSort(int arr[],int n){
    if(n<=1)return;
    recursiveInsertionSort(arr,n-1);
    for(int j=n-2;j>=0;j--){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        else{
            break;
        }
    }
    //print(arr,n);
}


int main(){
    int arr[9]={7,8,6,5,4,1,3,2,9};
    recursiveInsertionSort(arr,9);
    print(arr,9);
}

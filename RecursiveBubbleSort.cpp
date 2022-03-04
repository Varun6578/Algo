#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
//recursive bubble sort
void recursiveBubbleSort(int arr[],int n){
    if(n==0){
        return;
    }
    for(int i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
           swap(arr[i],arr[i+1]);
       }
    }
    recursiveBubbleSort(arr,n-1);
}
int main(){
    int arr[9]={7,8,6,5,4,1,3,2,9};
    recursiveBubbleSort(arr,9);
    print(arr,9);
}

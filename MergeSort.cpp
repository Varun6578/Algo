#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<"\n";
}
void merge(int arr[],int lo,int mid,int hi){
   int left=mid-lo+1;
   int right=hi-mid;
   int larr[left];
   int rarr[right];
   for(int i=0;i<left;i++){
        larr[i]=arr[lo+i];       
   }
   for(int i=0;i<right;i++){
       rarr[i]=arr[mid+i+1];
   }
    int l,r,k;
    l=0;r=0;k=lo;
    while(l<left and r<right){
        if(larr[l]<rarr[r]){
            arr[k++]=larr[l++];
        }
        else{
            arr[k++]=rarr[r++];
        }
    }
    while(l<left){
        arr[k++]=larr[l++];
    }
    while(r<right){
        arr[k++]=rarr[r++];
    }

}
void mergeSort(int arr[],int lo,int hi){
    if(lo<hi){
        int mid=lo+(hi-lo)/2;
        mergeSort(arr,lo,mid);
        mergeSort(arr,mid+1,hi);
        merge(arr,lo,mid,hi);
    }
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
   int arr[]={7,8,9,2,6,4,1,3,5};
   mergeSort(arr,0,8);
   print(arr,9);
}

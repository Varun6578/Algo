#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

//insertion sort
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
            else{
                break;
            }
        }
    }
}
int main(){
    int arr[9]={7,8,6,5,4,1,3,2,9};
    recursiveInsertionSort(arr,9);
    print(arr,9);
}

#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
void selectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int minnumberPos = i;
        for(int j=i+1;j<n;j++){
            if(arr[minnumberPos]<arr[j])
            minnumberPos=j;
        }swap(arr[minnumberPos],arr[i]);
    }
}
void insertionSort(int arr[],int n){

}
int main() {
     int arr[]={2,6,2,84,8,4,78,3};
    int n = sizeof(arr)/sizeof(arr[0]);
   selectionSort(arr,n);
// sort(arr+2,arr+n);inbuilt one for ascending
// sort(arr,arr+n,greater<int>());inbuilt one for descending
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
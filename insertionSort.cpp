#include <iostream>
#include <algorithm>
using namespace std;
  void insertionSort(int arr[],int n){
    for (int i=1;i<n;i++){
        int current = arr[i] ;
        int prev = i-1;
        while (prev>=0&&arr[prev]>current)
        {
           arr[prev+1]=arr[prev];
           prev--;
        }
        arr[prev+1]=current;
    }
  }
int main() {
       int arr[]={2,6,2,84,8,4,78,3};
    int n = sizeof(arr)/sizeof(arr[0]);
   insertionSort(arr,n);
// sort(arr+2,arr+n);inbuilt one for ascending
// sort(arr,arr+n,greater<int>());inbuilt one for descending
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
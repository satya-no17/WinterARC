#include <iostream>
using namespace std;
void countingSort(int arr[],int n){
    int maxn=0;
    for (int i =0;i<n;i++){
        maxn = max(maxn,arr[i]);
    }
    int* countingArr = new int[maxn+1]{0} ;
    for (int i=0;i<n;i++){
        countingArr[arr[i]]++;
    }int j=0;
    for (int i=0;i<=maxn;i++){
       while(countingArr[i]>0){
        arr[j]=i;
        j++;
        countingArr[i]--;
       }
    }
    
}
int main() {
     int arr[]={2,6,2,84,8,4,78,3};
    int n = sizeof(arr)/sizeof(arr[0]);
   countingSort(arr,n);
// sort(arr+2,arr+n);inbuilt one for ascending
// sort(arr,arr+n,greater<int>());inbuilt one for descending
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
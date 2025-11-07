#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for (int i =0;i<n-1;i++){
        int minNumberPosition = i;
        for (int j = i+1;j<n;j++){
            if (arr[minNumberPosition]>arr[j]){
                minNumberPosition = j;
            }
        }
        swap(arr[minNumberPosition],arr[i]);
    }
}
int main() {
    int arr[]={2,6,2,84,8,4,78,3};
    int n = sizeof(arr)/sizeof(arr[0]);
   selectionSort(arr,n);
    for (int i =0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
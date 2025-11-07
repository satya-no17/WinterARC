#include <iostream>
using namespace std;
int bs(int arr[],int key, int n){
    int st = 0;
    int end = n-1;

    while (st <=end){
        int mid = (st+end)/2;

        if (arr[mid]==key){
            return mid;
        }
        if (arr[mid]<key){
            st = mid+1;
        }
        else {
            end = mid-1;
        }

    }return -1;
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10} ;
    int key = 9;
    int n = size(arr);
int idx =bs(arr,key,n);
  if (idx != -1)  { cout<<arr[idx]<<" at index :"<<idx;}
  else {
    cout<<"not found";
  }
    return 0;
}
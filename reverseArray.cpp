#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = size(arr)-1;
    for (int i=0;i<n;i++){
        int temp;
        temp= arr[i];
        arr[i]=arr[n];
    arr[n]= temp;
    n--;
    }

    for(int i =0;i<size(arr);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
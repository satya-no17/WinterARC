#include <iostream>
using namespace std;
void pairs(int arr[],int n){
    for (int i=0;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }cout<<endl;
    }
}


int main() {
    int arr[]={2,4,6,8,10};
    int n =size(arr)-1;
    pairs(arr,n);
    return 0;
}
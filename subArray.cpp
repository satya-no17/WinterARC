#include <iostream>
using namespace std;
void subarray(int arr[],int n){
    int max = 0;
    int min=arr[0];
     for (int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum = sum +arr[k];
                cout<<arr[k]<<"  ";
            }
            if(sum!=0){
            cout<<"and its sum is :"<<sum<<"\n";
        if(sum>max){
            max = sum;
        }
     if(sum<min){
            min = sum;
        }}
        } cout<<endl;
     }
     cout<<"max= "<<max;
     cout<<endl;
     cout<<"min= "<<min;
}
int main() {
    int arr[]={1,-2,6,-1,3};
    int n =size(arr)-1;
    subarray(arr,n);
    return 0;
}
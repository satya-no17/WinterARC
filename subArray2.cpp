#include <iostream>
using namespace std;

void subarray(int arr[],int n){
    int max = INT_MIN; 
int min = INT_MAX; 

    int prefixarr[n];
    prefixarr[0]=arr[0];
    for (int i = 1; i<n;i++){
        prefixarr[i]=prefixarr[i-1]+arr[i];
    }
     for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            // for(int k=i;k<=j;k++){
            //     sum = sum +arr[k];
            //     cout<<arr[k]<<"  ";
            // }
           sum =(i ==0)? prefixarr[j]: (prefixarr[j]-prefixarr[i-1]);
            if(sum!=0){
            cout<<" sum is :"<<sum<<"\n";
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
    int n =size(arr);
    subarray(arr,n);
    return 0;
}
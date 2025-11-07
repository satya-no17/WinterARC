#include <iostream>
using namespace std;
int bestBuy(int arr[],int n){
    int buy =arr[0] ;
    int maxp=0;
    int profit =0;
    for (int i = 1;i<n;i++){
    buy =min(arr[i],buy);
    profit =arr[i]-buy;

    maxp = max(profit,maxp);
    }return maxp;
}
int main() {
     int arr[]={7,1,5,3,6,4};
    int n =sizeof(arr)/sizeof(arr[0]);
  cout<<( bestBuy(arr,n));
    return 0;
}
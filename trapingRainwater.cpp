#include <iostream>
using namespace std;
int trapedwater(int arr[],int n){
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    int j = n-2;
    int ttw=0;
   for (int i=1;i<n;i++,j--){
    lmax[i]=max(lmax[i-1],arr[i]);
    rmax[j]=max(rmax[j+1],arr[j]);
   }
   for (int i = 0;i<n;i++){
     ttw   += min(rmax[i],lmax[i])-arr[i];
 
   }
   return ttw;
}
int main() {
         int arr[]={4,2,0,6,3,2,5};
    int n =sizeof(arr)/sizeof(arr[0]);
  cout<<( trapedwater(arr,n));
    return 0;
}
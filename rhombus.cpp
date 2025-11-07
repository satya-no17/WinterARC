#include <iostream>
using namespace std;

int main() {
    int n=9;
    for (int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
       if (i==1||i==n){
         for (int j=0;j<n;j++){
            cout<<"*";
        }
       }
       else{
        cout<<"*";
        for(int j=0;j<n-2;j++){
            cout<<" ";
        }
        cout<<"*";
       }
        cout<<endl;
    }
    return 0;
}
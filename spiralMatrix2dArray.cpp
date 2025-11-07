#include <iostream>
using namespace std;

int main() {
    int m[4][4];
    int k;
    for (int i =0;i<4;i++){
        for (int j =0;j<4;j++){
        cin>>k;
        m[i][j]=k;
    }
    }
     for (int i =0;i<4;i++){
        for (int j =0;j<3;j++){
        
        cout<<m[i][j]<<" ";
    }cout<<"\n";
    }
    return 0;
}
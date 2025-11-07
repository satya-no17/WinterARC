#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int k;
    for (int i =0;i<3;i++){
        for (int j =0;j<3;j++){
        cin>>k;
        matrix[i][j]=k;
    }
    }
     for (int i =0;i<3;i++){
        for (int j =0;j<3;j++){
        
        cout<<matrix[i][j]<<" ";
    }cout<<"\n";
    }
    return 0;
}
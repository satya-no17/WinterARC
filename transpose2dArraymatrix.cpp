#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = { {2, 3, 7}, {5, 6, 7} };
    int row=2,column=3;
    int transpose[column][row];

    for (int i =0;i<row;i++){
        for (int j=0;j<column;j++){
            transpose[j][i]=matrix[i][j];
            cout<<matrix[i][j]<<"  ";
        }cout<<"\n";
    }
    for (int j=0;j<column;j++){
        for(int i=0;i<row;i++){
            cout<<transpose[j][i]<<"  ";
        }cout<<"\n";
    }
    return 0;
}
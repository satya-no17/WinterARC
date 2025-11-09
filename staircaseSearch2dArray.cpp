#include <iostream>
using namespace std;

int main() {
    int m[4][4]  = {{1,2,3,4},{12,13,14,15},{21,22,23,24},{31,32,33,34}};

    int l= 4;
    int target = 33;
    for(int i=0,j=l-1;i<l&&j>=0;){
        if (m[i][j]==target){
            cout<< "i = "<<i<<"  j = "<<j;
            return 0;
        }
         else if (m[i][j]<target){
            i++;
        }
        else{
           j--;
        }
    }
    return 0;
}
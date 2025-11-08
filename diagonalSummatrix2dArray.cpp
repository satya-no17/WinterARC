#include <iostream>
using namespace std;

int main() {
    
    int m[4][4];
    int k;
    int len = 4;
    int sum = 0;
       for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {


            cin >> k;
            m[i][j] = k;
        }
    }
// for (int i=0,j=0;i<len;i++,j++){
//     sum = sum +m[i][j];
// }
// for (int i=0,j=len-1;i<len;i++,j--){
//     sum = sum + m[i][j];
// }
 for (int i=0;i<len;i++){
  sum = sum +m[i][i];
  if (i != len-1-i){
    sum = sum +m[i][len-1-i];
  }
}

cout<<sum;
    return 0;
}
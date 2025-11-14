#include <iostream>
using namespace std;

int main() {
   //solved uning XOR(^) where value ^ value = 0 as it cancel the same number
    int a[]={1,2,1,2,4};
     int ans =0;
    for (int i=0;i<5;i++){
        ans = ans ^ a[i];
    }
    cout<<ans;
    return 0;
}
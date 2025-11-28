#include <iostream>
#include<vector>
using namespace std;
 int compress(vector<char>& chars) {
              int trackVal=0;
for (int i=0;i<chars.size();){
        int count = 0;
        char idx = chars[i];

        while(i<chars.size()&&chars[i]==idx){
                count++;
                i++;
        }
       
        chars[trackVal++]=idx;
        
        if(count >1){
            string c = to_string(count);
            for (char val:c){
                chars[trackVal++]=val;
            }
        }
 }
        return trackVal;
      }  
int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout<<compress(chars);
    return 0;
}
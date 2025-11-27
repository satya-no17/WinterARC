#include <iostream>
using namespace std;
 bool isFreqSame(int a[], int b[]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        


        for (char val:s1){freq[val-'a']++;}


        for(int i=0;i<s2.length();i++){
           
           int windowidx=0,idx=i;
            int freq2[26]={0};
            for (int windowidx=0,idx=i ;idx<s2.length()&&windowidx<s1.length();idx++,windowidx++){
                freq2[s2[idx]-'a']++;
            }
            if(isFreqSame(freq,freq2))return true;
        }
return false;
    }
int main() {
    string s1 = "ab", s2 = "eidbaooo";
    cout<<checkInclusion(s1,s2);
    return 0;
}
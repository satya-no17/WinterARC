#include <iostream>
using namespace std;
bool alpha(char ch){
    if (isalnum(ch))return true;
    else{return false;}
}
    bool isPalindrome(string s) {
        int st=0,end=s.length()-1;
        while(st<end){
            if(!isalnum(s[st])){st++;continue;}
            if(!isalnum(s[end])){end--;continue;}
            if(tolower(s[st])!=tolower(s[end]))return false;
            else{
                st++;
                end--;
            }
        }return true;}

int main() {
    string s = "A man, a plan, a canal: Panama";
   cout<< isPalindrome(s);
   cout<<s[5];
    return 0;
}
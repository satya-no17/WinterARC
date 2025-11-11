#include <iostream>
using namespace std;

int main() {
    string a = "hi i am satya hehe";
    for (int i=0;i<a.length();i++){
        if (i==0)a[i]=a[i]-'a'+'A';
        else if(a[i]== ' '&& i<a.length()-1){a[i+1]=a[i+1]-'a'+'A';}
        else{a[i]=a[i];}
    }
    cout <<a;
    return 0;
}
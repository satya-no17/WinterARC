#include <iostream>
using namespace std;

int main() {
    string a,b ;
    cin >>a;
    b=a;
    int n=a.length();
    cout<<a<<"\n";
    for (int i=0;i<n/2;i++){
        char temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    cout <<a<<"\n";
if (a==b){
    cout<<"palindrome";
} 
else {cout<<"not palindrome";}
    return 0;
}
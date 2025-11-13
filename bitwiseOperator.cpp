#include <iostream>
using namespace std;

int main()
{
    // in and (&)operator if there is a 0 then output will be 0
    // in or (|)operator if there is a 1 output will be 1
    // in xor(^) if there is same number then output is 0 if different then 1
    // in not(~)output is opposite but we have to do 2s compliment(is compliment and then add 1)
    // in binary left shift(<<) if we write a<<b(2) then the value of a in binary have to shift 2 places forward and the blank places will filled with 0
    // and right shift is just opposite of it
    // /for example
    int a = -5, b = 6; 
    cout << (a & b) << "\n";
    cout << (a | b) << "\n";
    cout << (a ^ b) << "\n";
    cout << (~a +1) << "\n";
    cout <<(-a<<b)<<"\n";
    cout <<(-a>>b)<<"\n";

    return 0;
}
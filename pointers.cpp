#include <iostream>
using namespace std;

int main() {
    //pointer are those that store the address of the value 
    //for exapmle  
    //store it we will write 
    int a=10;
    int* ptr = &a;
    cout <<&a<<endl;//show the adress of the variable in that pointer
    cout<< ptr<<endl; //address of the pointer
    //here * is a dereference operstor that show the value at a placew
    //for example
    cout << *(ptr)<<endl;
    cout<<*(&a)<<endl;//in both the line it will show the value of pouinter 
    return 0;
}
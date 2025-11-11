#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I am learning C++";
    string sub = "learn";

    if (str.find(sub) != string::npos) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }
cout<<str.substr(0,10);
    return 0;
}

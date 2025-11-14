#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>name ={1,2,3};
    vector<int>allZerovalue (4,0);//here all values of this array is 0
    cout << name[0]<<endl;
    for (int val : allZerovalue){
        cout<<val<<endl;
    }//way to use loops on the values of vector 

    name.push_back(4);// add a element at the end
    cout<<name[3]<<endl;
    name.pop_back();//delete the last number
   cout<< name.front()<<endl;//to print first element of the array 
   cout<< name.back()<<endl;//to print the last element of the  array 
   cout<< name.at(1)<<endl;//print the deasired element of the array

    return 0;
} 
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include <iostream>
#include <vector>
using namespace std;
bool checkRepeat(vector<int>arr){
    for (int i=0;i<arr.size();i++){
        for (int j =i+1;j<arr.size();j++){
            if (arr[i]==arr[j]){
                return true;
            }
        }
    }return false;
}
int main()
{
    vector<int>arr = {1, 2, 3, 4, 1};
    cout << (checkRepeat(arr) ? "true" : "false");
    return 0;
}
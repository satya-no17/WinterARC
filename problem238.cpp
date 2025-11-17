#include <iostream>
#include<vector>
using namespace std;
vector<int> ans(vector<int>&nums){
    int n =nums.size();
    vector<int>answer(n);
    answer[0]=1;
    for(int i=1;i<n;i++){
        answer[i]=answer[i-1]*nums[i-1]; 
    }  
    int suffix=1;  
    for (int j=n-1;j>=0;j--){

        answer[j]=suffix*answer[j];
        suffix *= nums[j];
    }
    return answer;
}
int main() {
    vector<int>nums= {1,2,3,4};
   vector<int>answer = ans(nums);
 for (int val:answer){
    cout<<val<<"  ";

 }
    return 0;
}
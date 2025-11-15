#include <iostream>
#include <vector>
using namespace std;
    int majorityElement(vector<int>& nums) {
        int freq= 0,ans= 0;
        for (int i=0;i<nums.size();i++){
           if (freq ==0){
            ans = nums[i];
           } 
           if(ans ==nums[i]){
            freq++;
           }
           else{
            freq--;
           }
        }return ans;
        //my idea
        //sort(nums.begin(),nums.end());
        //return nums[nums.size()/2];}
    }  
int main() {
    vector<int>num = {2,2,1,1,1,2,2};
   cout<<majorityElement(num);
    return 0;
}
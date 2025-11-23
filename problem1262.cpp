#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
   int maxSumDivThree(vector<int>& nums) {
        vector<int>r1,r2;
        int sum = 0;
        for(int i:nums){
           if (i % 3 == 1) r1.push_back(i);
            else if (i % 3 == 2) r2.push_back(i);
            sum+=i;
        }

        sort(r1.begin(), r1.end());
        sort(r2.begin(), r2.end());
        if(sum%3 == 0){
            return sum;
        }
        else if(sum%3 == 2){
            int rem1=INT_MAX,rem2= INT_MAX;
            if (!r2.empty())rem1 = r2[0];
            if(r1.size()>=2) rem2 =r1[0]+r1[1];

            return sum -min(rem1,rem2);
        }
        else{
             int rem1=INT_MAX,rem2= INT_MAX;
            if (!r1.empty())rem1 = r1[0];
            if(r2.size()>=2) rem2 =r2[0]+r2[1];

            return sum -min(rem1,rem2);
        }

        return 0;
    }
int main() {
    vector<int>nums = {3,6,5,1,8};
   cout<< maxSumDivThree(nums);
    return 0;
}
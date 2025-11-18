#include <iostream>
#include<vector>
using namespace std;
int search(vector<int> &nums, int target)
{
    int st = 0, end = nums.size();
    while (st <= end)
    {
        int mid = st + (end-st) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[st] <= nums[mid])
            {
            if (target < nums[mid] && target >= nums[st])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (target > nums[mid] && target <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
    }
int main()
{
    vector<int>arr = {2,3,4,5,6,7,1,};
    cout<<search(arr,7);

    return 0;
}
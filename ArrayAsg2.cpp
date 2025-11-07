//  There is an integer array nums sorted in ascending order (with distinct
// values). Prior to being passed to your function, nums is possibly rotated at an
// unknown pivot index k (1 <= k < nums.length) such that the resulting array
// is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0
// indexed). For example, [0,1,2,4,5,6,7] might
// be
// rotated at
// index 3 and become [4,5,6,7,0,1,2].
// pivot
//  Given the array nums after the possible rotation and an integer target, return
// the index of target if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
using namespace std;
int bs(int arr[], int n, int target)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= arr[st])
        {
            if (target >= arr[st] && target < arr[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        else
        {
            if (target <= arr[end] && target > arr[mid])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2}, target = 0;
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << bs(nums, n, target);
    return 0;
}
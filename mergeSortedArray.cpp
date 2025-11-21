#include <iostream>
#include<vector>

using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;

        for (;j>=0;k--){
            if (i>=0&& nums2[j]<nums1[i]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
        }
    }
int main() {
    vector<int>nums1 = {1,2,3,0,0,0} , nums2 = {2,5,6};
    int m = 3,n=3;
    merge(nums1,m,nums2,n);
    for (int i=0;i<m+n;i++){
        cout<< nums1[i]<<"   ";
    }
    return 0;
}
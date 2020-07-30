/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int m = nums1.size();
        int n = nums2.size();
        if(m == 0)
        {
            nums3 = nums2;
        }
        if(n == 0)
        {
            nums3 = nums1;
        }
        if(m > 0 && n > 0)
        {
            int j = 0;
            int k = 0;
            for(int i = 0; i < m + n; ++i)
            {
                if(j > 0 && k > 0)
                {

                }
            }
        }
        int median;
        return median;
    }
};


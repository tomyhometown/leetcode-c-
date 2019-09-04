/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> two;
        for(unsigned int i = 0; i < nums.size() - 1; ++i)
        {
            for(unsigned int j = i + 1; j < nums.size(); ++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    two.push_back(i);
                    two.push_back(j);
                    return two;
                }
            }
        }
        return two;
    }
};


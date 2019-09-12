/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
        {
            return 0;
        }
        string longestSubString;
        longestSubString.push_back(s.at(0));
        int max = 1;
        string::iterator iter;
        for(iter = s.begin(); iter != s.end(); ++iter)
        {
            string subString;
            subString.push_back(*iter);
            string::iterator it;
            for(it = iter + 1; it != s.end(); ++it)
            {
                string::iterator itSub;
                bool flag = false;
                for(itSub = subString.begin(); itSub != subString.end(); ++itSub)
                {
                    if(*it == *itSub)
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
                else
                {
                    subString.push_back(*it);
                }
            }
            if(subString.length() > longestSubString.length())
            {
                longestSubString = subString;
                max = subString.length();
            }
        }
        return max;
    }
};

// int main()
// {
//     Solution solution;
//     int max = solution.lengthOfLongestSubstring("pwwkew");
//     return 0;
// }


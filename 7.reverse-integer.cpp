/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
#include <math.h>
class Solution {
public:
    int reverse(int x) {
        int reverse_x;
        if(x > 9)
        {
            reverse_x = reverse_positive_number(x);
            if(reverse_x > (pow(2, 31) - 1))
            {
                reverse_x = 0;
            }
        }
        if((x > -10) && (x < 10))
        {
            reverse_x = x;
        }
        if(x < -9)
        {
            if((x + 1) == (-(pow(2, 31) - 1)))
            {
                return 0;
            }
            x = -x;
            reverse_x = reverse_positive_number(x);
            reverse_x = -reverse_x;
            if(reverse_x < (-pow(2, 31)))
            {
                reverse_x = 0;
            }
        }
        return reverse_x;
    }

  int reverse_positive_number(int y){
        int reverse_y = 0;
        while(y > 9)
        {
            int num = y % 10;
            if(reverse_y > ((pow(2, 31) - 1) - (num * 10)) / 10)
            {
                return 0;
            }
            else
            {
                reverse_y = reverse_y * 10 + num * 10;
                y = y / 10;
            }
        }
        if((reverse_y + y) > (pow(2, 31) - 1))
        {
            return 0;
        }
        else
        {
            reverse_y = reverse_y + y;
        }
        return reverse_y;
    }
};


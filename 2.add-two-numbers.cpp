/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<math.h>
class Solution {
public:
    // struct ListNode {
    //     int val;
    //     ListNode *next;
    //     ListNode(int x) : val(x), next(NULL) {}
    // };
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3;
        int digit;
        if(l1 != nullptr && l2 != nullptr && l3 != nullptr)
        {
            l3->val = (l1->val + l2->val) % 10;
            digit = (l1->val + l2->val) / 10;
        }
        while (l1->next != nullptr || l2->next != nullptr)
        {
            l1 = l1->next;
            l2 = l2->next;
            if(l1 != nullptr && l2 != nullptr)
            {
                ListNode *l;
                if(l1 != nullptr && l2 != nullptr && l3 != nullptr)
                {
                    l->val = digit + (l1->val + l2->val) % 10;
                    digit = (l1->val + l2->val) / 10;
                    l3->next = l;
                }
            }
            if(l1 == nullptr)
            {
                l3->next->val = digit + l2->val;
                l3->next->next = l2->next;
                break;
            }
            if(l2 == nullptr)
            {
                if(l1 != nullptr && l3 !=nullptr && l3->next != nullptr)
                {
                    l3->next->val = digit + l1->val;
                }
                if(l1->next != nullptr && l3->next->next != nullptr)
                {
                    l3->next->next = l1->next;
                }
                break;
            }
        }
        return l3;
    }
};


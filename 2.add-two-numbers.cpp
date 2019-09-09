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

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(-1);
        int digit = 0;
        head->val = (digit + l1->val + l2->val) % 10;
        digit = (digit + l1->val + l2->val) / 10;
        head->next = nullptr;
        ListNode *end = new ListNode(-1);
        end = head;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 != nullptr || l2 != nullptr)
        {
            if(l1 != nullptr && l2 != nullptr)
            {
                ListNode *node = new ListNode(-1);
                node->val = (digit + l1->val + l2->val) % 10;
                digit = (digit + l1->val + l2->val) / 10;
                end->next = node;
                end = node;
                l1 = l1->next;
                l2 = l2->next;
            }
            if(l1 == nullptr && l2 != nullptr)
            {
                ListNode *node = new ListNode(-1);
                node->val = (digit + l2->val) % 10;
                digit = (digit + l2->val) / 10;
                end->next = node;
                end = node;
                l2 = l2->next;
            }
            if(l2 == nullptr && l1 != nullptr)
            {
                ListNode *node = new ListNode(-1);
                node->val = (digit + l1->val) % 10;
                digit = (digit + l1->val) / 10;
                end->next = node;
                end = node;
                l1 = l1->next;
            }
        }
        if(digit != 0)
        {
            ListNode *node = new ListNode(-1);
            node->val = digit;
            end->next = node;
            end = node;
        }
        end->next = nullptr;
        return head;
    }
};

// int main()
// {
//     Solution solution;
//     ListNode *l1, *l2;
//     l1 = new ListNode(-1);
//     l2 = new ListNode(-1);
//     l1->next = new ListNode(-1);
//     l2->next = new ListNode(-1);
//     l1->next->next = new ListNode(-1);
//     l2->next->next = new ListNode(-1);
//     l1->val = 2;
//     l1->next->val = 4;
//     l1->next->next->val = 3;
//     l2->val = 5;
//     l2->next->val = 6;
//     l2->next->next->val = 4;
//     solution.addTwoNumbers(l1, l2);
// }


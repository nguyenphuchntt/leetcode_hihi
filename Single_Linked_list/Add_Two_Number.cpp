#include <bits/stdc++.h>
using namespace std;

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1 = 0;
        int n2 = 0;
        ListNode* c = l1;
        while (c != nullptr) {
            c = c->next;
            n1++;
        }
        c = l2;
        while (c != nullptr) {
            c = c->next;
            n2++;
        }
        if (n1 != n2) {
            ListNode* zeroSubList = new ListNode(0);
            ListNode* zeroCurr = zeroSubList;
            for (int i = 1; i < abs(n1-n2); i++) {
                zeroCurr->next = new ListNode(0);
                zeroCurr = zeroCurr->next;
            }
            if (n1 < n2) {
                c = l1; 
                while (c->next != nullptr) {
                    c = c->next;
                }
                c->next = zeroSubList;
            } else {
                c = l2; 
                while (c->next != nullptr) {
                    c = c->next;
                }
                c->next = zeroSubList;
            }
        }

        int re = 0;        
        ListNode* res = new ListNode(l1->val + l2->val);
        ListNode* currRes = res;
        if (res->val >= 10) {
            res->val = res->val % 10;
            re = 1;
        }
        ListNode* a = l1->next;
        ListNode* b = l2->next;

        while (a != nullptr && b != nullptr) {
            int curr = a->val + b->val + re;
            if (curr >= 10) {
                curr = curr % 10;
                re = 1;
            } else {
                re = 0;
            }
            currRes->next = new ListNode(curr);
            currRes = currRes->next;
            a = a->next;
            b = b->next;
        }
        if (re) {
            currRes->next = new ListNode(1);
        }
        return res;
    }
};
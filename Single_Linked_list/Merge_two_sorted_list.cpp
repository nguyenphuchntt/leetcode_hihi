#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        }
        ListNode* a = new ListNode();
        ListNode* b = a;
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        while (curr1 != nullptr && curr2 != nullptr) {
            if (curr1->val > curr2->val) {
                b->next = curr2;
                b = b->next;
                curr2 = curr2->next;
            } else {
                b->next = curr1;
                b = b->next;
                curr1 = curr1->next;
            }
        }
        while (curr1 != nullptr) {
            b->next = curr1;
            b = b->next;
            curr1 = curr1->next;
        }
        while (curr2 != nullptr) {
            b->next = curr2;
            b = b->next;
            curr2 = curr2->next;
        }

        return a->next;
    }
};
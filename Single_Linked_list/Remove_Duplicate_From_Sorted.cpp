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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* a = head;
        ListNode* b = head->next;
        while (a != nullptr) {
            while (b != nullptr && b->val == a->val) {
                b = b->next;
            }
            a->next = b;
            a = b;
            if (b != nullptr) {
                b = b->next;
            }
        }
        return head;

    }
};
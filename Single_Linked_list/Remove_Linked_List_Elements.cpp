// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* curr = head;

        while (curr != nullptr) {
            if (curr->next && curr->next->val == val) {
                ListNode* tmp = curr;
                while (tmp->next != nullptr && tmp->next->val == val) {
                    tmp = tmp->next;
                }
                curr->next = tmp->next;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};
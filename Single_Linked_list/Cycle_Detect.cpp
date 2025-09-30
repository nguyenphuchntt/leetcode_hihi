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
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode* before = head;
        ListNode* after = head;
        while (before->next != nullptr && before->next->next != nullptr) {
            after = after->next;
            before = before->next->next;
            if (before == after) {
                return true;
            }
        }
        return false;
    }
};
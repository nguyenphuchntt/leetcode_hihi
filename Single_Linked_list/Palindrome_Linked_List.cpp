// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) {
            return false;
        }
        ListNode* curr = head;
        stack<ListNode*> st;
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->next;
        }
        curr = head;
        while (!st.empty()) {
            ListNode* topElement = st.top();
            if (curr->val != topElement->val) {
                return false;
            }
            st.pop();
            curr = curr->next;
        }
        return true;
    }
};
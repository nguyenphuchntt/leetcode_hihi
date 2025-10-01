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
    ListNode* reverseList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr = head;
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->next;
        }
        head = st.top();
        curr = head;
        while (!st.empty()) {
            ListNode* topNode = st.top();
            st.pop();

            curr->next = topNode;
            curr = topNode;
        }
        curr->next = nullptr;
        return head;
        
    }
};
#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

ListNode* oddEvenList(ListNode* head) {
    if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
        return head;
    }
    ListNode* oddList = head->next;
    ListNode* currE = head->next->next;
    head->next = currE;
    ListNode* currO = oddList;
    while (currE->next != nullptr && currE->next->next != nullptr) {
        currO->next = currE->next;
        currE->next = currE->next->next;
        currO = currO->next;
        currE = currE->next;
    }
    if (currE->next != nullptr) {
        currO->next = currE->next;
        currE->next = oddList;
    } else {
        currO->next = nullptr;
        currE->next = oddList;
    }
    return head;
}

int main() {
    // Tạo linked list 1->2->3->4->5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    // Gọi hàm oddEvenList
    ListNode* newHead = oddEvenList(head);

    cout << "Modified list: ";
    printList(newHead);

    return 0;
}
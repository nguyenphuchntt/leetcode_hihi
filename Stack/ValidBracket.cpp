#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>myStack;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                myStack.push(ch);
                continue;
            }
            if (myStack.empty()) {
                return false;
            } else if (ch == ')' && myStack.top() == '(') {
                myStack.pop();
            } else if (ch == ']' && myStack.top() == '[') {
                myStack.pop();
            } else if (ch == '}' && myStack.top() == '{') {
                myStack.pop();
            } else {
                return false;
            }
        }
        return myStack.empty();
    }
};
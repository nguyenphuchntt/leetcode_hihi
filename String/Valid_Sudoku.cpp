#include <bits/stdc++.h>
using namespace std;
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> rows[9];
        unordered_set<int> cols[9];
        unordered_set<int> squares[3][3];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] > '9' || board[i][j] < '0') {
                    continue;
                }
                int curr = board[i][j] - '0';
                if (rows[i].contains(curr) || cols[j].contains(curr) || squares[i/3][j/3].contains(curr)) {
                    return false;
                }
                rows[i].insert(curr);
                cols[j].insert(curr);
                squares[i/3][j/3].insert(curr);
            }
        }
        return true;
    }
};
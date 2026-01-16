//LeetCode Problem 36: Valid Sudoku
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    bool rows[9][9]={false};
    bool cols[9][9]={false};
    bool boxes[9][9]={false};

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]=='.')
                continue;

            int num= board[i][j] -'1';
            int boxIndex=(i/3)*3+(j/3);

            if(rows[i][num] || cols[j][num] || boxes[boxIndex][num])
                return false;

            rows[i][num] = true;
            cols[j][num] = true;
            boxes[boxIndex][num] = true;
        }
    }
    return true;
}
};
int main() {
    Solution s;
    int boardSize = 9;
    int boardColSize[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};  
    char** board = new char*[boardSize];
    
    board[0] = new char[9]{'5', '3', '.', '.', '7', '.', '.', '.', '.'};
    board[1] = new char[9]{'6', '.', '.', '1', '9', '5', '.', '.', '.'};
    board[2] = new char[9]{'.', '9', '8', '.', '.', '.', '.', '6', '.'};
    board[3] = new char[9]{'8', '.', '.', '.', '6', '.', '.', '.', '3'};
    board[4] = new char[9]{'4', '.', '6', '8', '.', '3', '.', '.', '1'};
    board[5] = new char[9]{'7', '.', '.', '.', '2', '.', '.', '.', '6'};
    board[6] = new char[9]{'.', '6', '.', '.', '.', '.', '2', '8', '.'};
    board[7] = new char[9]{'.', '.', '.', '4', '1', '9', '.', '.', '5'};
    board[8] = new char[9]{'.', '.', '.', '.', '8', '.', '.', '7', '9'};            

    cout << s.isValidSudoku((char**)board, boardSize, boardColSize) << endl;

    for (int i = 0; i < boardSize; i++) {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}

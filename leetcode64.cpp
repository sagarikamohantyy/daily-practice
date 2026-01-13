//LeetCode Problem 64: Minimum Path Sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int row= gridSize;
    int col= gridColSize[0];
    
    for(int i=1; i<row; i++){
        grid[i][0]+=grid[i-1][0];
    }

    for(int j=1; j<col; j++){
        grid[0][j]+=grid[0][j-1];
    }
    
    for(int i=1; i<row; i++){
        for(int j=1; j<col; j++){
            if(grid[i][j-1]<grid[i-1][j]){
                grid[i][j]+=grid[i][j-1];
            }    
            else{
                grid[i][j]+=grid[i-1][j];
            }
        }        
    }

    int min= grid[row-1][col-1];
    return min;
    }
};
int main() {
    Solution s;
    int gridSize = 4;
    int gridColSize[] = {4, 4, 4, 4};
    int** grid = new int*[gridSize];

    grid[0] = new int[4]{2, 3, 4, 5};
    grid[1] = new int[4]{3, 4, 5, 6};
    grid[2] = new int[4]{6, 5, 7, 8};
    grid[3] = new int[4]{4, 1, 8, 3};

    cout << s.minPathSum(grid, gridSize, gridColSize);

    for (int i = 0; i < gridSize; i++) {
        delete[] grid[i];
    }
    delete[] grid;

    return 0;
}

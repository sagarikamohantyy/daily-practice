//LeetCode Problem 120: Triangle
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
    for(int i=1; i<triangleSize; i++){
        for(int j=0; j<triangleColSize[i]; j++){
            if(j==0){
                triangle[i][j]+=triangle[i-1][j];
            }
            else if(j>= triangleColSize[i-1]){
                triangle[i][j]+=triangle[i-1][j-1];
            }
            else{
                if(triangle[i-1][j-1]<triangle[i-1][j]){
                    triangle[i][j]+=triangle[i-1][j-1];
                }    
                else{
                    triangle[i][j]+=triangle[i-1][j];
                }
            }        
        }
    }
    int min= triangle[triangleSize-1][0];
    for(int i=0; i<triangleColSize[triangleSize-1]; i++){
            if(triangle[triangleSize-1][i]<min){
                min=triangle[triangleSize-1][i];
                }
        }
    return min;
    }        
};

int main() {
    Solution s;
    int triangleSize = 4;
    int triangleColSize[] = {1, 2, 3, 4};
    int** triangle = new int*[triangleSize];

    triangle[0] = new int[1]{2};
    triangle[1] = new int[2]{3, 4};
    triangle[2] = new int[3]{6, 5, 7};
    triangle[3] = new int[4]{4, 1, 8, 3};

    cout << s.minimumTotal(triangle, triangleSize, triangleColSize);

    for (int i = 0; i < triangleSize; i++) {
        delete[] triangle[i];
    }
    delete[] triangle;

    return 0;
}

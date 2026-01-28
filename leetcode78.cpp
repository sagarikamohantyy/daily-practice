#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> row(m, false);
        vector<bool> col(n, false);

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main(){
    cout<< "Enter the matrix dimentions:";
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout<< "Enter the matrix elements:";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    Solution sol;
    sol.setZeroes(matrix);
    cout<< "The modified matrix is:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
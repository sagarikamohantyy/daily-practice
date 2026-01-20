#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int temp= matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i]= temp;
            }
        }

        for(int i=0; i<n; i++){
            int c=0, r=n-1;
            while(c<r){
                int temp= matrix[i][c];
                matrix[i][c]= matrix[i][r];
                matrix[i][r]= temp;
                c++; r--;
            }
        }
    }
};

int main() {
    Solution sol;
    int nums;
    cout<<"Enter size of matrix: ";
    cin>>nums;
    cout<<"Enter elements of matrix: ";
    vector<vector<int>> matrix(nums, vector<int>(nums));
    for(int i=0; i<nums; i++){
        for(int j=0; j<nums; j++){
            cin>>matrix[i][j];
        }
    }
    
    sol.rotate(matrix);
    cout<<"Rotated matrix: \n";
    for(int i=0; i<nums; i++){
        for(int j=0; j<nums; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


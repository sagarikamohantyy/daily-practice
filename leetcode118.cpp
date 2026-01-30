#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=0; i<numRows; i++){
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};

int main(){
    Solution sol;
    int numRows;
    cout<<"Enter number of rows:";
    cin>>numRows;
    vector<vector<int>>result= sol.generate(numRows);
    cout<< "Pascal's Triangle:"<<endl;
    for(const auto& row:result){
        for (int val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
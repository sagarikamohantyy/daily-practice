#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0; i< nums.size(); i++){
            for(int j=0; j< nums.size(); j++){
                if(nums[i]==nums[j] && i<j){
                    count++;
                }
            }
        } return count;
    }
};

int main() {
    Solution solution;
    cout<< "Enter no. of elements:";
    int n;
    cin>> n;
    vector<int> nums(n);
    cout<< "Enter elements:";
    for(int i=0; i<n; i++){
        cin>> nums[i];
    }
    int result = solution.numIdenticalPairs(nums);
    cout << "Number of good pairs:" << result;
    return 0;
}
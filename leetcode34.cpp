#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first= -1, last= -1;
        for(int i=0; i< nums.size(); i++){
            if(nums[i]== target){
                first= i;
                break;
            }
        }
        for(int j=nums.size()-1; j>=0; j--){
            if(nums[j]== target){
                last= j;
                break;
            }
        }
        
        return {first, last};
    }
};

int main() {
    Solution sol;
    cout<< "Enter no. of elements:";
    int n;
    cin>> n;
    vector<int> nums(n);
    cout<< "Enter elements:";
    for(int i=0; i<n; i++){
        cin>> nums[i];
    }
    cout<< "Enter target:";
    int target; 
    cin>> target;
    vector<int> result = sol.searchRange(nums, target);
    cout<< result[0]<< " " << result[1]<< endl;
    return 0;
}
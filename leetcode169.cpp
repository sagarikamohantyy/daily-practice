//LeetCode Problem 64: Minimum Path Sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(int* nums, int numsSize) {
    int count=0, candidate=0;
        for(int i=0; i<numsSize; i++){
            if(count==0){
                candidate= nums[i];
                count++;
            }
            else if(candidate== nums[i]){
                count++;
            }
            else {
                count--;
            }
        }
    return candidate;
    }
};

int main() {
    Solution sol;
    int nums[] = {2,2,1,1,1,2,2};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    cout << "Majority Element: " << sol.majorityElement(nums, numsSize) << endl;
    return 0;
}
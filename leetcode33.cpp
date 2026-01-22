#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low= 0, high= nums.size()-1;

        while (low<=high) {
            int mid= low+(high-low)/2;

            if (nums[mid]== target)
                return mid;

            if (nums[low]<= nums[mid]) {
                if (target>= nums[low] && target < nums[mid])
                    high= mid-1;
                else
                    low= mid+1;
            }
            else {
                if (target> nums[mid] && target<= nums[high])
                    low= mid+1;
                else
                    high= mid-1;
            }
        }
        return -1;
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
    int result = sol.search(nums, target);
    cout<<result;
    return 0;
}
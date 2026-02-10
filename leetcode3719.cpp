#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for (int i=0; i<n; i++) {
            unordered_set<int> even, odd;

            for(int j=i; j<n; j++) {
                if(nums[j]%2==0)
                    even.insert(nums[j]);
                else
                    odd.insert(nums[j]);

                if(even.size()==odd.size()){
                    ans=max(ans, j-i+1);
                }
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    Solution sol;
    int result = sol.longestBalanced(nums);
    cout<<"The length of the longest balanced subarray is: "<<result<<endl;
    return 0;
}
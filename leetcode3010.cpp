#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int min2=INT_MAX, min3=INT_MAX;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<=min2){
                    min3=min2;
                    min2=nums[i];
            }
            else if(nums[i]<=min3){
                min3=nums[i];
            }
        }
        return nums[0]+min2+min3;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int result = sol.minimumCost(nums);
    cout << "Minimum Cost: "<<result<<endl;
    return 0;
}
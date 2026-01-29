#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid], nums[high]);
                high--;
            }
            else if(nums[mid]==1){
                mid++;
            }
        }
    }
};

int main() {
    cout << "Enter no. of elements:";
    int n;
    cin >> n;
    cout << "Enter elements (0s, 1s, and 2s):";
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    obj.sortColors(nums);

    for(int i=0; i<n; i++){
        cout<<nums[i];
    }
    return 0;
}
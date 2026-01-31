#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        for(int x:nums) {
            if(seen.count(x))
                return true;
            seen.insert(x);
        }
        return false;
    }
};

int main(){
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj;
    if(obj.containsDuplicate(nums)){
        cout<<"Contains Duplicate"<<endl;
    }
    else{
        cout<<"No Duplicates"<<endl;
    }
}

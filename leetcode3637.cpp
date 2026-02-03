#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size(), p=-1,q=-1;
        if(n<3) return false;
        for(int i=1; i<n;i++){
            if(nums[i]<=nums[i-1]){
                p=i-1;
                break;  
            }
        }
        if(p<=0) return false;
        for(int i=p+1; i<n; i++){
            if(nums[i]>=nums[i-1]){
                q=i-1;
                break;
            }
        }
        if(p>=q|| q==n-1)return false;
        for(int i=q+1; i<n;i++){
            if(nums[i]<=nums[i-1]){
                return false;  
            }
        }
        return true;
    }
};

int main(){
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sol;
    if(sol.isTrionic(nums)){
        cout<<"The array is trionic."<<endl;
    } 
    else{
        cout<<"The array is not trionic."<<endl;
    }


}
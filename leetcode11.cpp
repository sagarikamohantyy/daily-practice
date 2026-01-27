#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0, high= height.size()-1;
        int maxArea = 0;
        
        while(low<high){
            int area= min(height[low],height[high])*(high-low);
            maxArea= max(area, maxArea);
            if(height[low]<=height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        
        return maxArea;
    }
};

int main(){
    cout<<"Enter the no. of elements:";
    int n;
    cin>>n;
    vector<int> height(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    Solution sol;
    int result = sol.maxArea(height);
    cout<<"The maximum area is: "<<result;
}
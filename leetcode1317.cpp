#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasZero(int x){
        while(x>0){
            if(x%10==0) return true;
            x/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            int b=n-i;
            if(!hasZero(i) && !hasZero(b)){
                return {i,b};
            }
        }
        return {};
    }
};

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Solution sol;
    vector<int> result = sol.getNoZeroIntegers(n);
    cout<<result[0]<<","<<result[1]<<endl;
    return 0;
}
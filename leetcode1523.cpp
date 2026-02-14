#include<iostream>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int n=(high-low+1);
        int odds=0;
        if(n%2==0) odds=n/2;
        if(n%2==1){
            if(low%2==1 || high%2==1){
                odds= n/2+1;
            }
            else{
                odds=n/2;
            }
        } 
        return odds;
    }
};
int main(){
    Solution s;
    int low, high;
    cout<<"Enter low and high: ";
    cin>>low>>high;
    cout<<s.countOdds(low, high)<<endl;
    return 0;
}
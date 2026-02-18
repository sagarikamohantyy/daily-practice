#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long x=(long long)n^((long long)n>>1);
        return (x&(x+1))==0;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool result=s.hasAlternatingBits(n);
    cout<<result<<endl; 
    return 0;
}
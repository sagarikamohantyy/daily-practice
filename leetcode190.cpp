#include <iostream>
using namespace std;
class Solution {
public:
    int reverseBits(int n) {
        int result=0;

        for(int i=0; i<32; i++){
            result=(result<<1) | (n&1);
            n>>=1;
        }
        return result;
    }
};

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Solution sol;
    int reversed=sol.reverseBits(n);
    cout<<"Reversed bits: "<<reversed<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int mask= 0;
        int temp= n;

        while(temp>0){
            mask= (mask<<1)|1;
            temp>>= 1;
        }
        return n^mask;
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    int result = sol.bitwiseComplement(n);
    std::cout << "The bitwise complement of " << n << " is: " << result << std::endl;
    return 0;
}
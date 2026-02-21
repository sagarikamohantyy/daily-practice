#include <iostream>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        if(n<2) return false;
        for(int i=2; i*i<=n; i++) {
            if(n%i==0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right){
        int count=0;

        for(int i=left; i<=right; i++) {
            int bits=__builtin_popcount(i);
            if(isPrime(bits)){
                count++;
            }
        }
        return count;
    }
};
int main() {
    Solution sol;
    int left, right;
    cout << "Enter the left bound: ";
    cin >> left;
    cout << "Enter the right bound: ";
    cin >> right;
    int result = sol.countPrimeSetBits(left, right);
    cout << "Count of numbers with prime set bits between " << left << " and " << right << " is: " << result << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator==0) return "0";
        string result;
        if ((numerator<0) ^ (denominator<0))
            result+="-";

        long long n= llabs(numerator);
        long long d= llabs(denominator);
        result+= to_string(n/d);
        long long rem=n%d;

        if (rem==0) return result;

        result+=".";
        unordered_map<long long, int> seen;

        while (rem!=0) {
            if (seen.count(rem)) {
                result.insert(seen[rem], "(");
                result+= ")";
                break;
            }
            seen[rem]=result.size();
            rem*=10;
            result+= to_string(rem/d);
            rem%=d;
        }
        return result;
    }
};
int main() {
    Solution sol;
    int numerator, denominator;
    cout << "Enter numerator and denominator: ";
    cin >> numerator >> denominator;
    cout << sol.fractionToDecimal(numerator, denominator) << endl;
    return 0;
}
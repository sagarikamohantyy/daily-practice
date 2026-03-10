#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
int main() {
    Solution sol;
    vector<int> digits;
    int n, num;
    cout << "Enter the number of digits: ";
    cin >> n;
    cout << "Enter the digits: ";
    for(int i=0; i<n; i++) {
        cin >> num;
        digits.push_back(num);
    }
    vector<int> result = sol.plusOne(digits);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
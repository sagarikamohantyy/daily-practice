#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;

        for (int h = 0; h < 12; h++) {
            for (int m = 0; m < 60; m++) {
                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                    string time = to_string(h) + ":";
                    if (m < 10) time += "0";
                    time += to_string(m);
                    result.push_back(time);
                }
            }
        }
        return result;
    }
};
int main(){
    Solution solution;
    int turnedOn;
    cout<<"Enter the number of LEDs that are on: ";
    cin>>turnedOn;
    vector<string> times=solution.readBinaryWatch(turnedOn);
    
    for (const string& time : times) {
        cout<<time<<endl;
    }
    
    return 0;
}
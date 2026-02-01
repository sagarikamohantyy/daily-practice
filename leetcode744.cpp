#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0;
        while(i<letters.size()){
            if (letters[i]>target) {
                return letters[i];
            }
            i++;
        }
        return letters[0];
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    vector<char> letters(n);
    cout << "Enter the elements:";
    for (int i=0; i<n; i++){
        cin>>letters[i];
    }
    char target;
    cout<<"Enter the target character:";
    cin>>target;
    char result=sol.nextGreatestLetter(letters, target);
    cout<<"Next Greatest Letter:"<<result<<endl;
    return 0; 
}  
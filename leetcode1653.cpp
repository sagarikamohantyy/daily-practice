#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int minimumDeletions(string s) {
        int n= s.size();
        int result=0;
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='b'){
                    count++;
                }
            else if(s[i]=='a'){
                result= min(count, result+1);
                }
            }
        return result;
    }
};

int main(){
    int n;
    cout<<"Enter the size of the string: ";
    cin>>n;
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    Solution solution;
    int result = solution.minimumDeletions(s);
    cout<<"Minimum deletions required: "<<result<<endl;
    return 0;
}
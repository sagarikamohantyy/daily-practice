#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0; i<jewels.size(); i++){
            for(int j=0; j<stones.size(); j++){
                if(jewels[i]== stones[j]){
                    count++;
                }
            }
        } return count;
    }
};

int main(){
    cout<<"Enter jewels: ";
    string jewels;
    cin>>jewels;
    cout<<"Enter stones: ";
    string stones;
    cin>>stones;
    Solution obj;
    int result = obj.numJewelsInStones(jewels, stones); 
    cout<<"Number of jewels in stones: "<<result<<endl;
    return 0;
}
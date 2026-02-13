#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time=0;
        for(int i=1; i<points.size(); i++){
            int dx= abs(points[i][0]-points[i-1][0]);
            int dy= abs(points[i][1]-points[i-1][1]);
            time+=max(dx,dy);
        }
        return time;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> points;
    int n;
    cout<<"Enter the number of points: ";
    cin>>n;
    cout<<"Enter the points (x y):" << endl;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x >>y;
        points.push_back({x, y});
    }
    int result = sol.minTimeToVisitAllPoints(points);
    cout <<"Minimum time to visit all points: "<<result <<endl;
    return 0;
}
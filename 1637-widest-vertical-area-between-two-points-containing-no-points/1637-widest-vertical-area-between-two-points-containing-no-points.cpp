class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int res = 0;
        sort(points.begin(), points.end());
        for(int i=1; i<points.size(); i++) {
            if((points[i][0] - points[i-1][0]) > res) {
                res = points[i][0] - points[i-1][0];
            }
        }
        return res;
    }
};
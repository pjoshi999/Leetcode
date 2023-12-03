class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;
        for(int i=1; i<points.size(); i++) {
            int dx = abs(points[i][0] - points[i-1][0]);
            int dy = abs(points[i][1] - points[i-1][1]);
            res += max(dx, dy);
        }
        return res;
    }
};

// https://stackoverflow.com/questions/59077134/minimum-time-visiting-all-points-understanding
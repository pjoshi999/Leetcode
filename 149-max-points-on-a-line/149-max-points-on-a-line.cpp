class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n= points.size();
        if(n<=2) {
            return n;
        }
        
        int maxi = 0;
        for(int i=0; i<n; i++) {
            unordered_map<double, int> mp;
            int duplicate = 0;
            double slope = 0.0;
            for(int j=0; j<n; j++) {
                int x1= points[i][0];
                int y1= points[i][1];
                int x2= points[j][0];
                int y2= points[j][1];
                int dx = x2-x1;
                int dy = y2-y1;
                
                if(dx == 0 && dy == 0) {
                    duplicate++;
                    continue;
                }
                
                //dx is 0 means slope is infinity
                if(dx==0) {
                    slope = INT_MAX;
                }
                else {
                    slope = (double)dy / (double)dx;
                }
                
                mp[slope]++;
            }
            if(mp.size() == 0) {
                maxi = duplicate;
            }
            else {
                for(auto x: mp) {
                    maxi = max(maxi, x.second + duplicate);   
                }
            }
        }
        return maxi;
    }
};
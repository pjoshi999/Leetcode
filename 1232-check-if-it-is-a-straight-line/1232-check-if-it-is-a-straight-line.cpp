class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float x = coordinates[0][0];
        float y = coordinates[0][1];
        for(int i=1; i<coordinates.size()-1; i++) {
            float x1 = coordinates[i][0] - x;
            float y1 = coordinates[i][1] - y;
            float x2 = coordinates[i+1][0] - x;
            float y2 = coordinates[i+1][1] - y;
            // cout<<y1<<" "<<x1<<endl;
            // cout<<y2<<" "<<x2<<endl;
            // cout<<y1/x1<<endl;
            // cout<<y2/x2<<endl;
            // cout<<endl;
            if((float)(y1*x2) != (float)(y2*x1)) {
                return false;
            }
        }
        return true;
    }
};
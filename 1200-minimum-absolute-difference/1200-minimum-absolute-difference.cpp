class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int minDiff= INT_MAX;
        int currDiff;
        vector<vector<int>> res;
        for(int i=0; i<arr.size()-1; i++) {
            auto [a, b] = minmax(arr[i], arr[i+1]);
            currDiff = b - a;
            if(currDiff == minDiff) {
                res.push_back({a, b});
            }
            else if(currDiff < minDiff) {
                minDiff = currDiff;
                res = {{a, b}};
            }
        }
        return res;
    }
};
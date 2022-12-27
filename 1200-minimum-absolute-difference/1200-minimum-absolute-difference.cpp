class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        // map<int, int> mp;
        sort(arr.begin(), arr.end());
        int ans= INT_MAX;
        vector<vector<int>> res;
        vector<int> v;
        for(int i=0; i<arr.size()-1; i++) {
            int j=i+1;
            if(abs(arr[j]-arr[i]) < ans) {
                ans = min(ans, abs(arr[j]-arr[i]));
                // cout<<ans<<endl;
            }
        }
        for(int i=0; i<arr.size()-1; i++) {
            int j=i+1;
            if(abs(arr[j]-arr[i]) == ans) {
                v.push_back(arr[i]);
                v.push_back(arr[j]);
                res.push_back(v);
                v.clear();
            }
        }
        return res;
    }
};
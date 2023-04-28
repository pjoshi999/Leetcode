class Solution {
public:
    void solve(vector<int> nums, int i, vector<int> v, vector<vector<int>> &res) {
        if(i == nums.size()) {
            res.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        solve(nums, i+1, v, res);
        v.pop_back();
        solve(nums, i+1, v, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> v;
        solve(nums, 0, v, res);
        return res;
    }
};
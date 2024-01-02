class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        int count = 0;
        
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
            count = max(count, mp[nums[i]]);
        }

        vector<vector<int>> res(count);
        for(auto it: mp) {
            int num = it.first;
            int freq = it.second;

            for(int i=0; i<freq; i++) {
                res[i].push_back(num);
            }
        }
        return res;
    }
};
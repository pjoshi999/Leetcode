class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for(auto it: mp) {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        int count = 0;
        for(auto it: v) {
            if(count < k) {
                res.push_back(it.second);
            }
            else {
                break;
            }
            count++;
        }
        return res;
    }
};
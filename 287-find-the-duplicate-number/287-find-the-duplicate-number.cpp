class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int res;
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            if(it->second != 1) {
                res = it->first;
            }
        }
        return res;
    }
};
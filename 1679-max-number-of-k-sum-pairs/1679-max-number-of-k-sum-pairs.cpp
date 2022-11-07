class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;
        for (int i=0; i<nums.size(); i++) {
            int key = k-nums[i];
            if(mp.find(key) != mp.end() && mp[key] > 0) {
                count++;
                mp[key] -= 1;
                mp[nums[i]] -= 1;
            }
            mp[nums[i]]++;
        }
        return count;
    }
};
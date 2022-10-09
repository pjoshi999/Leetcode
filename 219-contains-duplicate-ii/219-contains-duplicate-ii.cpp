class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            int key = nums[i];
            if(mp.find(key) != mp.end() && abs(mp[key] - i) <= k) {
                return true;
            }
            mp[key] = i;            
        }
        return false;
    }
};
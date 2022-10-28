class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> v;
        for(int i=0; i<nums.size(); i++) {
            int key = target-nums[i];
            auto temp = mp.find(key);
            if(mp.find(key) != mp.end()) {
                v.push_back(i);
                v.push_back(temp->second);
            }
            mp[nums[i]] = i;
        }
        return v;
    }
};
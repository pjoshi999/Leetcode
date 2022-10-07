class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            int key = nums[i];
            if(mp.find(target - key) != mp.end()) {
                auto temp = mp.find(target-key);
                ans.push_back(temp->second);
                ans.push_back(i);
            }
            else {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};
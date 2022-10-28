class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int currSum = 0;
        for(int i=0; i<nums.size(); i++) {
            currSum += nums[i];
            currSum %= k;
            if(currSum == 0 && i > 0) {
                return true;
            }
            auto temp = mp.find(currSum % k);
            if(mp.find(currSum) != mp.end()) {
                if(i-temp->second > 1) {
                    return true;
                }
            }
            else {
                mp[currSum] = i;
            }
        }
        return false;
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int res = 0;
        int currSum = 0;
        for(int i=0; i<nums.size(); i++) {
            currSum += nums[i];
            if(currSum == k) {
                res++;
            }
            if(mp.find(currSum-k) != mp.end()) {
                res += mp[currSum-k];
            }
            mp[currSum]++;
        }
        return res;
    }
};
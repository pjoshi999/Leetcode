class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto it: mp) {
            if(it.second == 1) {
                return -1;
            }
            res += it.second/3;
            if(it.second % 3 > 0) {
                res++;
            }
        }
        return res;
    }
};
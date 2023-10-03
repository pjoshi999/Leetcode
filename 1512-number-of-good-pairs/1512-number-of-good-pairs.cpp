class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto it: mp) {
            if(it.second >= 2) {
                res += (it.second * (it.second - 1))/2;  // n * n-1 / 2
            }
        }
        return res;
    }
};

// if number count is 2, then 1 pair
// 2 - 1
// 3 - 3
// 4 - 6
// 5 - 10
// 6 - 15 and so on
// So we can see we are doing sum till n-1. So We can put it in sum till n formula - n*(n+1)/2
// t.c - O(n)
// s.c - O(n)
// NOTE: This solution is not good as it can cause overflow if n > 10^5

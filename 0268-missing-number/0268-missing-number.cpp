class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]+1 != nums[i+1]) {
                return nums[i]+1;
            }
        }
        return nums[0] != 0 ? 0 : nums[nums.size()-1] + 1;
    }
};
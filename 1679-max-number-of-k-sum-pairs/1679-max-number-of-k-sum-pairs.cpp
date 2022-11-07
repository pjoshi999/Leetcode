class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int start = 0;
        int end = nums.size()-1;
        int count = 0;
        sort(nums.begin(), nums.end());
        while(start < end) {
            int sum = nums[start] + nums[end];
            if(sum == k) {
                count++;
                start++;
                end--;
            }
            else if(sum > k) {
                end--;
            }
            else {
                start++;
            }
        }
        return count;
    }
};
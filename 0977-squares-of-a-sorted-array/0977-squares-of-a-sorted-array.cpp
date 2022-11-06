class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v(nums.size());
        int start = 0;
        int end = nums.size()-1;
        for(int i=nums.size()-1; i>=0; i--) {
            if(abs(nums[start]) > abs(nums[end])) {
                v[i] = nums[start] * nums[start++];
            }
            else {
                v[i] = nums[end] * nums[end--];
            }
        }
        return v; 
    }
};
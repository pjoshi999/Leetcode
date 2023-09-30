class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() < 2) {
            return true;
        }
        int direction = 0;  // 0 for unknown, 1 for increasing, -1 for decreasing
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] > nums[i-1]) {  //increasing
                if(direction == 0) {
                    direction = 1;
                }
                else if(direction == -1) {
                    return false;
                }
            }
            else if(nums[i] < nums[i-1]) {  //decreasing
                if(direction == 0) {
                    direction = -1;
                }
                else if(direction == 1) {
                    return false;
                }
            }
        }
        return true;
    }
};
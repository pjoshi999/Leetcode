class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        if(nums.size() == 1) {
            return 0;
        }
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(mid > 0 && mid < nums.size()-1) {
                if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
                    return mid;
                }
                else if(nums[mid+1] > nums[mid]) {
                    start = mid + 1;
                }
                else if(nums[mid-1] > nums[mid]) {
                    end = mid - 1;
                }    
            }
            else {
                if(mid == 0) {
                    if(nums[mid] > nums[mid+1]) {   // nums[0] > nums[1]
                        return mid;    // 0
                    }
                    else {
                        return mid+1;    // 1
                    }
                }
                else if(mid == nums.size()-1) {
                    if(nums[mid] > nums[mid-1]) {    // nums[n] > nums[n-1]    where n = nums.size()
                        return mid;    // n
                    }
                    else {
                        return mid-1;    // n-1
                    }
                }
            }
        }
        return -1;
    }
};
class Solution {
public:
    bool binarySearch(vector<int> &nums, int start, int end, int target) {
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(nums[mid] == target) {
                return true;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return false;
    }

    int minEle(vector<int> &nums) {
        int n = nums.size();
        int start = 0;
        int end = nums.size()-1;
        while(start < end) {
            while(start < end && nums[start] == nums[start+1]) {
                start++;
            }
            while(start < end && nums[end] == nums[end-1]) {
                end--;
            }
            int mid = start + (end - start)/2;
            if(nums[mid] > nums[end]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return end;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int minElement = minEle(nums);
        cout<<minElement<<endl;
        int first = binarySearch(nums, 0, minElement-1, target);
        int second = binarySearch(nums, minElement, n-1, target);
        // if(first != -1) cout<<first<<endl;
        // else if(second != -1) cout<<second<<endl;
        
        if(first) {
            return true;
        }
        return second;
    }
};
class Solution {
public:
    int firstOccurence(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size()-1;
        int first = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(target == nums[mid]) {
                first = mid;
                end = mid - 1;
            }
            else if(target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return first;
    }
    
    int lastOccurence(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size()-1;
        int last = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(target == nums[mid]) {
                last = mid;
                start = mid + 1;
            }
            else if(target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int first = firstOccurence(nums, target);
        int last = lastOccurence(nums, target);
        // cout<<first<<" "<<last<<endl;
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};
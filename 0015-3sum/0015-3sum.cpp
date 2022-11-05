class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++) {
            if(i==0 || (i>0 && nums[i] != nums[i-1])) {
                int start = i+1;
                int end = nums.size()-1;
                int target = 0-nums[i];    // a+b+c=0  so  b + c = -a;
            
                // a = nums[i]  b = nums[start]  c = nums[end]
                while(start < end) {
                    int sum = nums[start] + nums[end];
                    if(sum > target) {
                        end--;
                    }
                    else if(sum < target) {
                        start++;
                    }
                    else {
                        vector<int> v = {nums[i], nums[start], nums[end]};
                        res.push_back(v);
                        
                        while(start < end && nums[start] == nums[start+1]) start++;
                        while(start < end && nums[end] == nums[end-1]) end--;
                        start++;
                        end--;
                    }
                }
            }
        }
        return res;
    }
};
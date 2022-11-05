class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        // Sort The array
        sort(nums.begin(), nums.end());
        
        // moves for a
        for(int i=0; i<nums.size()-2; i++) {
            
            // duplicates are ignored
            if(i==0 || (i>0 && nums[i] != nums[i-1])) {
                
                int start = i+1;  // b 
                int end = nums.size()-1;  // c         
                
                // a+b+c=0  so  b + c = -a;
                int target = 0-nums[i];    
            
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
                        
                        // Ignoring the duplicates for b
                        while(start < end && nums[start] == nums[start+1]) start++;

                        // Ignoring the duplicates for c
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
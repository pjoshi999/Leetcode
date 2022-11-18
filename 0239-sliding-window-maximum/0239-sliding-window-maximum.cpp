class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int maxi = INT_MIN;
        vector<int> res;
        list<int> l;
        
        if(k > nums.size()) {
            res.push_back(*max(nums.begin(), nums.end()));
            return res;
        }
        
        while(j<nums.size()) {
            //calculation
            while(l.size() > 0 && l.back() < nums[j]) {
                l.pop_back();
            }
            l.push_back(nums[j]);            
            
            if(j-i+1 < k) {
                j++;
            }
            else if(j-i+1 == k) {
                //ans calculation
                res.push_back(l.front());
                
                //slide the window
                //check if arr[i] == l.front() if yes then l.pop_front();
                if(nums[i] == l.front()) {
                    l.pop_front();
                }
                i++;
                j++;
            }
        }
        return res;
    }
};
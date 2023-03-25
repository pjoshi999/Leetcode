class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            nums[i] = (nums[i]%value + value) % value;  // + value) % value indicates that negative remainder is converted to positive remainder

            // Same as above line
            // if(nums[i] < 0) nums[i] = nums[i]%value + value;
            // else nums[i] = nums[i]%value;
        }
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        // for(auto it: mp) {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }

        int mex = 0;
        while(mex < n) {
            if(mp.find(mex % value) != mp.end() && mp[mex % value] > 0) {
                mp[mex % value]--;
                mex++;
            }
            else {
                break;
            }
        }
        return mex;
    }
};
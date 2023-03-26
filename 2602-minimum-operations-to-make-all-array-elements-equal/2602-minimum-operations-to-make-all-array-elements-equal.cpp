class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // prefix sum
        vector<long long> pref(n, 0);
        pref[0] = nums[0];
        for(int i=1; i<nums.size(); i++) {
            pref[i] = pref[i-1] + (long long)nums[i];
        }
        // for(int i=0; i<pref.size(); i++) {
        //     cout<<pref[i]<<" ";
        // }
        
        vector<long long> res;
        for(int i=0; i<queries.size(); i++) {
            long long int leftSum = 0;
            long long int rightSum = 0;
            auto lb = lower_bound(nums.begin(), nums.end(), queries[i]);
            if(lb != begin(nums)) {
                lb--;
                auto idx = lb - begin(nums);
                leftSum = (idx+1)*queries[i] - pref[idx];
            }
            
            long long int suffixSum = 0;
            auto ub = upper_bound(nums.begin(), nums.end(), queries[i]);
            if(ub != end(nums)) {
                auto idx = ub - begin(nums);
                if(idx > 0) {
                    suffixSum = pref.back() - pref[idx-1];
                }
                else {           // idx = 0
                    suffixSum = pref.back();          //sum of all elements
                }
                rightSum = suffixSum - (n-idx)*queries[i];
            }
            res.push_back(leftSum + rightSum);

        }
        return res;
    }
};

// https://youtu.be/ciWE9NddD8w
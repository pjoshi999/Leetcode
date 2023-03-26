class Solution {
public:
    vector<int> SieveOfEratosthenes(int n)
    {
        vector<int> v;
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p < n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        for (int p = 2; p <= n; p++) {
            if (prime[p]) {
                v.push_back(p);
            }
        }
        return v;
    }
    
    bool primeSubOperation(vector<int>& nums) {
        vector<int> res = SieveOfEratosthenes(1001);

        for(int i=nums.size()-2; i>=0; i--) {
            if(nums[i] >= nums[i+1]) {
                for(int j=0; j<res.size() && res[j] < nums[i]; j++) {
                    if(nums[i] - res[j] < nums[i+1]) {
                        nums[i] = nums[i] - res[j];
                        break;
                    }
                }
            }
        }
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] <= nums[i-1]) {
                return false;
            }
        }
        return true;
    }
};
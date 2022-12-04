class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int totalSum = 0;
        // long long int tempSum = 0;
        long long int currSum = 0;
        vector<int> v;
        int n = nums.size();
        long long int res;
        int mini = INT_MAX; 
        for(int i=0; i<nums.size(); i++) {
            totalSum += nums[i];
        }
        for(int i=0; i<nums.size(); i++) {
            currSum += nums[i];
            long long int avg = currSum / (i+1);
            
            long long int avg1 = (i == n-1) ? 0 : (totalSum - currSum) / (n-i-1);
            
            // cout<<avg<<" "<<avg1<<" "<<abs(avg-avg1)<<endl;
            if(abs(avg - avg1) < mini) {
                mini = abs(avg - avg1);
                res = i;
            }
        }
        return res;
    }
};
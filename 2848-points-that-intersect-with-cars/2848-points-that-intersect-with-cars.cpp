class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int res = 0;
        vector<int> v(101, 0);
        for(int i=0; i<nums.size(); i++) {
            for(int j=nums[i][0]; j<=nums[i][1]; j++) {
                v[j] = 1;
            }
        }
        for(int i=0; i<v.size(); i++) {
            if(v[i] == 1) res++;
        }
        return res;
    }
};
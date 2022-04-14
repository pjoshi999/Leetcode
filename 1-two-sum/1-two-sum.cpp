class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> p;
        int diff;
        unordered_map<int, int> m;
        for (int i=0; i<nums.size(); i++)
        {
            diff = target - nums[i];
            if(m.find(diff) != m.end() && m.find(diff)->second != i)
            {
                p.push_back(i);
                p.push_back(m.find(diff)->second);
                return p;
            }
            m[nums[i]] = i;
        }
        return p;
    }
};
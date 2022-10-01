class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(int i=0; i<nums1.size(); i++) {
            s.insert(nums1[i]);
        }
        vector<int> res;
        for(int i=0; i<nums2.size(); i++) {
            if(s.count(nums2[i]) > 0) {
                s.erase(nums2[i]);
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};
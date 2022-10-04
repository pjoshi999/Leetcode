class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        vector<int> v, ans;
        
        for(int i=0; i<arr1.size(); i++) {
            mp[arr1[i]]++;
        }
        for(int i=0; i<arr2.size(); i++) {
            int key = arr2[i];
            auto temp = mp.find(key);
            while(mp.find(key) != mp.end() && temp->second > 0) {
                ans.push_back(temp->first);
                temp->second -= 1;
            }
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            // while(it->second > 0 ) {
            //     v.push_back(it->first);
            //     it->second-=1;
            // }
            vector<int> v(it->second, it->first);
            ans.insert( ans.end(), v.begin(), v.end() );
        }
        return ans;
    }
};
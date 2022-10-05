class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;
        string ans;
        for(auto x: s) {
            mp[x]++;
        }
        for(auto x: order) {
            if(mp.find(x) != mp.end()) {
                auto temp = mp.find(x);
                int count = temp->second;
                string str(count, x); 
                ans += str;
                mp.erase(x);
            }
        }
        
        for(auto x: mp) {
            string str(x.second, x.first);
            ans += str;
        }
        return ans;
    }
};
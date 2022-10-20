class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int> mp;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
        string ans;
        for(int i=0; i<order.length(); i++) {
            int key = order[i];
            auto temp = mp.find(key);
            while(mp.find(key) != mp.end() && temp->second>0) {
                ans += temp->first;
                temp->second -= 1;
            }
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            string str(it->second, it->first);
            ans += str;
        }
        return ans;
    }
};
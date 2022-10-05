class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int> mp;
        string ans;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
        for(int i=0; i<order.length(); i++) {
            int key = order[i];
            if(mp.find(key) != mp.end()) {
                auto temp = mp.find(key);
                int count = temp->second;
                string str(count, temp->first); 
                ans += str;
                mp.erase(key);
            }
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            string str(it->second, it->first);
            ans += str;
        }
        return ans;
    }
};
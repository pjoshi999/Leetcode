class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int res = 0;
        // unordered_map<char, int> mp;
        while(j<s.size() && i<s.size()) {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') {
                // mp[s[j]]++;
                count++;
                // cout<<"count++:"<<count<<endl;
            }
            // cout<<s[i]<<" "<<s[j]<<endl;
            if(j-i+1 < k) {
                j++;
            }
            else if(j-i+1 == k) {
                res = max(res, count);
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    // mp[s[i]]--;
                    count--;
                    // cout<<"count--:"<<count<<endl;
                }
                // if(mp[s[i]] == 0) {
                //     mp.erase(s[i]);
                // }
                i++;
                j++;
            }
            // cout<<"res:"<<res<<endl;
            // for(auto it: mp) cout<<it.first<<" "<<it.second<<endl;
            // cout<<"------------------------"<<endl;
        }
        return res;
    }
};
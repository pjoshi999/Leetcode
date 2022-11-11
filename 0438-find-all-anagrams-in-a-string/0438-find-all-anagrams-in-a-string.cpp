class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size() < p.size()) {
            return {};
        }
        
        vector<int> p_freq(26, 0);
        vector<int> window(26, 0);
        
        for(int i=0; i<p.size(); i++) {
            p_freq[p[i] - 'a']++;      // count frequency of each character
            window[s[i] - 'a']++;      // window will slide (sliding window)
        }
        
        vector<int> res;
        if(p_freq == window) {
            res.push_back(0);   // 0 index (first element)
        }
        
        //sliding the window now and removing first character
        for(int i=p.size(); i<s.size(); i++) {
            window[s[i] - 'a']++;    //adding next character's frequency
            window[s[i-p.size()] - 'a']--;   // removing first character of previous window
            
            if(window == p_freq) {
                res.push_back(i-p.size() + 1);   // first index of current window (i represents last index of the window)
            }
        }
        return res;
    }
};
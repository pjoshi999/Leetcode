class Solution {
public:
    string reverseWords(string s) {
        //reverse the whole string
        reverse(s.begin(), s.end());
        
        int i=0, l=0, r=0;
        int n = s.size();
        while(i < n) {
            while(s[i] != ' ' && i < n) { // i ko agar char dikha to vo r ko dega and i++ and r++
                s[r] = s[i];
                r++;
                i++;
            }
            
            if(l < r) {
                reverse(s.begin()+l, s.begin()+r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        return s.substr(0, r-1);
    }
};

// https://www.youtube.com/watch?v=mdej8UiRCkI
class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for(int k=2; k<=n; k++) {
            string str = res;
            int l = res.size();
            res="";
            int i=0;
            while(i < l) {
                int j = i;
                while(str[i] == str[j]) {
                    j++;
                }
                res += to_string(j-i) + str[i];
                i = j;
            }
        }
        return res;
    }
};
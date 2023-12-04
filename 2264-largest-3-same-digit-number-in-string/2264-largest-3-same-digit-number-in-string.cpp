class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        for(int i=0; i<num.size()-2; i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                string temp;
                temp.push_back(num[i]);
                temp.push_back(num[i+1]);
                temp.push_back(num[i+2]);
                res = max(res, temp);
            }
        }
        return res;
    }
};
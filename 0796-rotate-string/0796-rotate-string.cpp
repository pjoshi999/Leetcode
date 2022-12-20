class Solution {
public:
    bool rotateString(string s, string goal) {
        // KMP String Matching Algorithm
        
        if(s.size() != goal.size()) {
            return false;
        }
        string str = s + s;
        if(str.find(goal) != string::npos) {         // npos indicated the end of string
            return true;
        }
        return false;
    }
};
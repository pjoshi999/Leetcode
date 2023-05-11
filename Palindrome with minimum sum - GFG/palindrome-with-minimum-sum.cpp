//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int n = s.size();
        vector<char> v;
        for(int i=0; i<s.size(); i++) {
            if(s[i] != s[n-i-1]) {
                if(s[i] == '?') s[i] = s[n-i-1];
                else if(s[n-i-1] == '?') s[n-i-1] = s[i];
                else return -1;
            }
            if(s[i] != '?') {
                v.push_back(s[i]);
            }
        }
        if(v.size() <= 1) {
            return 0;
        }
        int res = 0;
        for(int i=1; i<v.size(); i++) {
            res += abs(v[i] - v[i-1]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
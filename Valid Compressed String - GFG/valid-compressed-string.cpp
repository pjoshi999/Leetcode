//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int i = 0, j = 0;
        while (i < S.length() && j < T.length()) {
            if (isdigit(T[j])) {
                int k = 0;
                while (j < T.length() && isdigit(T[j])) {
                    k = k * 10 + (T[j] - '0');
                    j++;
                }
                i += k;
            } else {
                if (S[i] == T[j]) {
                    i++;
                    j++;
                } else {
                    return 0;
                }
            }
        }
        if (i == S.length() && j == T.length()) {
            return 1;
        } else {
            return 0;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends
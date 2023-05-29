//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> res;
        vector<string> v = Dictionary;
        // sort(Dictionary.begin(), Dictionary.end());
        for(int i=0; i<N; i++) {
            int j=0;
            int k=0;
            string temp = "";
            // cout<<v[i]<<" "<<Pattern[j]<<endl;
            for(int j=0; j<Dictionary[i].size(); j++) {
                if(v[i][j] >= 65 && v[i][j] <= 90) {
                    temp += v[i][j];
                }
            }
            // cout<<temp<<endl;
            bool flag = false;
            if(Pattern.size() <= temp.size()) {
                for(int j=0; j<Pattern.size(); j++) {
                    if(Pattern[j] != temp[j]) {
                        flag = true;
                        break;
                    }
                }
                if(flag == false) {
                    res.push_back(Dictionary[i]);
                }
            }
        }
        if(res.size() == 0) {
            res.push_back("-1");
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
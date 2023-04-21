//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void solve(vector<int> &v, int start, int k) {
        if(v.size() == 1) {
            return;
        }
        start += k;
        int temp = v.size();
        start %= temp;
        // start = (start+k)%v.size();
        v.erase(v.begin()+start);
        solve(v, start, k);
        return;
    }
  
    int safePos(int n, int k) {
        // code here
        vector<int> v(n);
        for(int i=1; i<=n; i++) {
            v[i-1] = i;
        }
        k--;
        solve(v, 0, k);
        return v[0];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends
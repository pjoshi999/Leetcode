//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void solve(vector<int> &v, int start, int k){
        if(v.size()==1){             //Return last standing person
            return;
        }
        start+=k;                    //Position of person form start which is to be eliminated
        int s = v.size();
        start%=s;                    //Taking remainder so that index does not go above the size of array
        v.erase(v.begin()+start);      //Eliminating the person
        solve(v,start,k);             //Recusive call
        return;
    }
  
    int safePos(int n, int k) {
        // code here
        vector<int> v(n);
        int res  = 0;
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
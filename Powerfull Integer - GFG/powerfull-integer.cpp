//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        // Code here

        int maxi = INT_MIN;
        for(auto it: intervals) {
            maxi = max(maxi, it[1]);
        }
        vector<int> v(maxi+2);
        for(auto it: intervals) {
            v[it[0]]++;
            v[it[1]+1]--;
        }
        int res = -1;
        for(int i=1; i<maxi+2; i++) {
            v[i] = v[i] + v[i-1];
            if(v[i] >= k) {
                res = max(res, i);
            }
        }
        return res;
    }
};
// Check this explanation 
// https://youtu.be/9cvyj_O0RHU  -- CodeThrust

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
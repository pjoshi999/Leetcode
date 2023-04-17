//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void solve(string in, string op, vector<string> &res) {
        if(in.size() == 0) {
            res.push_back(op);
            return;
        }
        string op1 = op;
        string op2 = op;
        op1.push_back(' ');
        op1.push_back(in[0]);
        op2.push_back(in[0]);
        in.erase(in.begin()+0);
        solve(in, op1, res);
        solve(in, op2, res);
    }

    vector<string> permutation(string S){
        // Code Here
        vector<string> res;
        string ip = S;
        string op = "";
        op += ip[0];
        S.erase(S.begin() + 0);
        solve(S, op, res);
        return res;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends
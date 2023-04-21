//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    void solve(int N, int ones, int zeros, string op, vector<string> &res) {
        if(N == 0) {
            res.push_back(op);
            return;
        }
        if(ones > zeros) {
            string op1 = op;
            string op2 = op;
            op1.push_back('1');
            op2.push_back('0');
            solve(N-1, ones+1, zeros, op1, res);
            solve(N-1, ones, zeros+1, op2, res);
        }
        else {
            string op1 = op;
            op1.push_back('1');
            solve(N-1, ones+1, zeros, op1, res);
        }
    }

	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> res;
	    string op = "";
	    op += "1";
	    int ones = 1;
	    int zeros = 0;
	    solve(N-1, ones, zeros, op, res);
	    return res;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
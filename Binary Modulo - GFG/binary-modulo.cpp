//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            int res = s[s.size()-1]-'0';
            int temp = 1;
            for(int i=s.size()-2; i>=0; i--) {
                int rem = s[i]-'0';
                temp *= 2;
                res += temp * rem;
                temp %= m;
                // cout<<"res: "<<res<<" temp: "<<temp<<endl;
            }
            return res%m;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends
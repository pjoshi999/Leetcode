//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int res = 0;
        for(int i=0; i<S.size(); i++) {
            string str = "";
            int low = 0;
            int up = 0;
            for(int j=i; j<S.size(); j++) {
                str += S[j];
                if(S[j] >= 65 && S[j] <= 90) {
                    up++;
                }
                else if(S[j] >= 97 && S[j] <= 127) {
                    low++;
                }
                if(low == up) {
                    res++;
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends
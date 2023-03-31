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
        unordered_map<int, int> mp;
        int res = 0;
        int sum = 0;
        for(int i=0; i<S.size(); i++) {
            if(isupper(S[i])) {
                sum++;
            }
            else {
                sum--;
            }
            if(sum == 0) {
                res++;
            }
            if(mp.find(sum) != mp.end()) {
                res += mp[sum];
            }
            mp[sum]++;
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
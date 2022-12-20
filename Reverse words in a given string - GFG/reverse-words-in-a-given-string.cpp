//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        vector<string> v;
        string str = "";
        for(int i=0; i<S.size(); i++) {
            if(S[i] != '.') {
                str += S[i];
            }
            else {
                v.push_back(str);
                str = "";
            }
        }
        v.push_back(str);
        str = "";
        for(int i = v.size()-1; i>=0; i--) {
            str += v[i] + ".";
        }
        str.erase(str.size()-1, 1);
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
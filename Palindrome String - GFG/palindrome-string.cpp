//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int res = 0;
	    // Your code goes here
	    int n = S.size();
	    if(n == 1) {
	        return 1;
	    }
	    for(int i=0; i<n/2; i++)
	    {
	        if(S[i] == S[n-i-1]) {
	            res = 1;
	        }
	        else {
	            return 0;
	            
	        }
	    }
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
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
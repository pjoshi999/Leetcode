//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int> p_freq(26, 0);
	    vector<int> window(26, 0);
	    
	    for(int i=0; i<pat.size(); i++) {
	        p_freq[pat[i]-'a']++;
	        window[txt[i]-'a']++;
	    }
	    
	    int count = 0;
	    if(p_freq == window) {
	        count++;
	    }
	    
	    for(int i=pat.size(); i<txt.size(); i++) {
	        window[txt[i]-'a']++;
	        window[txt[i-pat.size()] - 'a']--;
	        
	        if(window == p_freq) {
	            count++;
	        }
	    }
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
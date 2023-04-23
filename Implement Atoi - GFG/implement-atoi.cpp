//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    void solve(string str, int i, int &num, bool flag) {
        if(i == str.size()) {
            if(flag) {
                num = 0 - num;
            }
            return;
        }
        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 || str[i] == 43 || str[i] == 45 && i > 0) {
            num = -1;
            return;
        }
        if(str[i] == 43 || str[i] == 45 && i == 0) {
            if(flag == false) flag = true;
            else {
                num = -1;
                return;
            }
        }
        else {
            int rem = str[i]-'0';
            num = num*10 + rem;
        } 
        solve(str, i+1, num, flag);
    }
    
    int atoi(string str) {
        //Your code here
        int num = 0;
        bool flag = false;
        solve(str, 0, num, flag);
        return num;
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
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
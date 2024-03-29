//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long factorial(long long N) {
        if(N == 0 || N == 1) {
            return 1;
        }
        return N * factorial(N-1);
    }

    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> res;
        for(long long i=1; i<=N; i++) {
            long long int fact = factorial(i);
            if(fact <= N) {
                res.push_back(fact);
            }
            else {
                break;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends
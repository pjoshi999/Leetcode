//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_map<string, int> mp;
        vector<string> brr = arr;
        int j = arr[0].size();
        for(int i=0; i<n; i++) {
            reverse(brr[i].begin(), brr[i].end());
            mp[brr[i]]++;
        }
        // for(auto it: mp) {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        // cout<<"-----------------------"<<endl;
        for(int i=0; i<n; i++) {
            if(mp.find(arr[i]) != mp.end()) {
                mp[arr[i]]--;
                // cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
                if(mp[arr[i]] == 0) {
                    mp.erase(arr[i]);
                }
            }
        }
        if(mp.size() > 1) {
            return false; 
        }
        else if(mp.size() == 1) {
            for(auto it: mp) {
                string temp = it.first;
                reverse(temp.begin(), temp.end());
                if(temp == it.first) return true;
                else return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends
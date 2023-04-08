//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        // if(s.size() == (s.size()/2)+1) {
        //     return;
        // }
        vector<int> v;
        int count = 0;
        while(count != sizeOfStack/2 +1) {
            count++;
            v.push_back(s.top());
            s.pop();
        }
        // for(auto it: v) {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
     
        // while(!s.empty()) {
        //     cout<<s.top()<<" ";
        //     s.pop();
        // }
        for(int i=v.size()-2; i>=0; i--) {
            s.push(v[i]);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
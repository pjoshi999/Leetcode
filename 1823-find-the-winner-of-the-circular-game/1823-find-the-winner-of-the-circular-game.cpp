class Solution {
public:
    void solve(vector<int> &v, int start, int k) {
        if(v.size() == 1) {
            return;
        }
        // start += k;
        // int temp = v.size();
        // start %= temp;
        start = (start+k)%v.size();
        v.erase(v.begin()+start);
        solve(v, start, k);
        return;
    }

    int findTheWinner(int n, int k) {
        vector<int> v(n);
        for(int i=1; i<=n; i++) {
            v[i-1] = i;
        }
        k--;
        solve(v, 0, k);
        return v[0];
    }
};
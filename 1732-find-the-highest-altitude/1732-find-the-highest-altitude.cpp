class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currSum = 0;
        int res = 0;
        for(int i=0; i<gain.size(); i++) {
            currSum += gain[i];
            res = max(res, currSum);
        }
        if(currSum > res) {
            res = currSum;
        }
        return res;
    }
};
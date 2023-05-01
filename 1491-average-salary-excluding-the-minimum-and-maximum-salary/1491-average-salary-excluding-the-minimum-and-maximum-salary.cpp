class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        if(n == 1) {
            return salary[0];
        }
        sort(salary.begin(), salary.end());
        double currSum = 0;
        for(int i=1; i<n-1; i++) {
            currSum += salary[i];
        }
        // cout<<currSum<<endl;
        return (double)currSum/(n-2);
    }
};
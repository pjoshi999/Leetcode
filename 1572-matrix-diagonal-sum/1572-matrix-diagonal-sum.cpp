class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int currSum = 0;
        int j = mat[0].size()-1;
        for(int i=0; i<mat.size(); i++) {
            if(i != j) {
                currSum += mat[i][i] + mat[i][j];
            }
            else {
                currSum += mat[i][i];
            }
            j--;
        }
        return currSum;
    }
};
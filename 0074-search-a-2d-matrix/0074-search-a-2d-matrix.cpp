class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // cout<<matrix[0].size()<<endl;
        int i = 0;
        int j = matrix[0].size()-1; 
        while(i>=0 && i<matrix.size() && j>=0 && j<matrix[0].size()) {
            if(matrix[i][j] == target) {
                return true;
            }
            else if(target < matrix[i][j]) {
                j--;
            }
            else if(target > matrix[i][j]) {
                i++;
            }
        }
        return false;
    }
};
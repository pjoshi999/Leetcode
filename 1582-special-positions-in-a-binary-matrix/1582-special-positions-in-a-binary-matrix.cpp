class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int res = 0;
        
        vector<int> rowCount(n, 0);   // how many 1 in a row
        vector<int> colCount(m, 0);   // how many 1 in a col

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mat[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mat[i][j] == 0) {
                    continue;
                }
                if(rowCount[i] == 1 && colCount[j] == 1) {
                    res++;
                }
            }
        }
        return res;
    }
};
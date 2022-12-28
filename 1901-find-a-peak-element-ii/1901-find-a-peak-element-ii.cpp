class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int i = 0;
        int j = mat[0].size()-1;
        while(i>=0 && i<mat.size() && j>=0 && j<mat[0].size()) {
            
            int top = i-1 >= 0 ? mat[i-1][j] : -1;
            int bottom = i+1 < mat.size() ? mat[i+1][j] : -1;
            int left = j-1 >= 0 ? mat[i][j-1] : -1;
            int right = j+1 < mat[0].size() ? mat[i][j+1] : -1;
            
            //check if current element is peak or not
            if(mat[i][j] > top && mat[i][j] > left && mat[i][j] > bottom && mat[i][j] > right) {
                return {i, j};
            }
            
            //find maximum of all four direction elements of current element
            int maxi = max({left, right, top, bottom});
            
            
            //moving in direction of maximum element
            if(left == maxi) {    //mat[i][j-1]
                j--;
            }
            else if(bottom == maxi) {    //mat[i+1][j]
                i++;
            }
            else if(top == maxi) {    //mat[i-1][j]
                i--;
            }
            else if(right == maxi) {    //mat[i][j+1]
                j++;
            }
        }
        return {-1, -1};
    }
};
//GFG Problem: Matrix Boundary Traversal

class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        vector<int> result;
        int rows = mat.size();
        int cols = mat[0].size();
        
        for(int j = 0; j < cols; j++){              //First Row
            result.push_back(mat[0][j]);
        }
        for(int i = 1; i < rows; i++){              //Last Column
            result.push_back(mat[i][cols - 1]);
        }
        if(rows > 1){                   //Last Row
            for (int j = cols - 2; j >= 0; j--){
                result.push_back(mat[rows - 1][j]);
            }
        }
        if(cols > 1){                   //First Column
            for(int i = rows - 2; i > 0; i--){
                result.push_back(mat[i][0]);
            }
        }
        return result;
    }
};

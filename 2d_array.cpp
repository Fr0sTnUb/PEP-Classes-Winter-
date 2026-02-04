//GFG Problem: Print matrix in snake pattern

class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; i < rows; i++){
            if (i % 2 == 0){
                for(int j = 0; j < cols; j++){
                    cout << matrix[i][j] << " ";
                }
            }else {
                for (int j = cols - 1; j >= 0; j--){
                    cout << matrix[i][j] << " ";
                }
            }
        }
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int total = row * col;
        int count = 0;

        // initialise the indexes;
        int startRow = 0;
        int endCol = col - 1;
        int endRow = row - 1;
        int startCol = 0;

         while(count < total){

            //print startRow
            for(int idx = startCol; count < total && idx <= endCol; idx++){
                ans.push_back(matrix[startRow][idx]);
                count++;
            }
            startRow++;

            // print lastCol
            for(int idx = startRow; count < total && idx <= endRow; idx++){
                ans.push_back(matrix[idx][endCol]);
                count++;
            }
            endCol--;

            // print lastRow

            for(int idx = endCol; count < total && idx >= startCol; idx--){
                ans.push_back(matrix[endRow][idx]);
                count++;
            }
            endRow--;

            // print firstCol

            for(int idx = endRow; count < total && idx >= startRow; idx--){
                ans.push_back(matrix[idx][startCol]);
                count++;
            }
            startCol++;
        }

        return ans;
    

        
    }
};

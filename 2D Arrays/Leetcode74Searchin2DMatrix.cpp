class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row=matrix.size();
            int col=matrix[0].size();
            int currrow=0;
            int currcol=col-1;
            while(currrow<row && currrow>=0 && currcol<col && currcol>=0){
                if(matrix[currrow][currcol]==target) return true;
                else if(matrix[currrow][currcol]>target){
                    currcol--;
                }
                else{
                    currrow++;
                }
            }
    
            return false;
        }
    };
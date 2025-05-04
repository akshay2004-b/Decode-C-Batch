class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            unordered_set<int> row;
            unordered_set<int> col;
            int r=matrix.size();
            int c=matrix[0].size();
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(matrix[i][j]==0){
                        row.insert(i);
                        col.insert(j);
                    }
                }
            }
    
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(row.count(i)>0 || col.count(j)>0){
                        matrix[i][j]=0;
                    }
                }
            }
    
           
        }
    };
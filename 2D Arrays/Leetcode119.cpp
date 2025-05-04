class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            vector<vector<int>> result;
            for(int i=0;i<=rowIndex;i++){
                result.push_back(vector<int> (i+1));
            }
    
            result[0][0]=1;
            for(int i=1;i<=rowIndex;i++){
                for(int j=0;j<=i;j++){
                    if(j==0 || j==i) result[i][j]=1;
                    else result[i][j]=result[i-1][j-1]+result[i-1][j];
                }
            }
    
            return result[rowIndex];
        }
    };
class Solution {
    public:
        int convert(vector<int> &v){
            int n=v.size();
            int sum=0;
            int x=1;
            for(int i=n-1;i>=0;i--){
                sum+=v[i]*x;
                x=x*2;
            }
    
            return sum;
        }
        int matrixScore(vector<vector<int>>& grid) {
            int row=grid.size();
            int col=grid[0].size();
            for(int i=0;i<row;i++){
                if(grid[i][0]==0) {
                    for(int j=0;j<col;j++){
                        if(grid[i][j]==1) grid[i][j]=0;
                        else grid[i][j]=1;
                    }
                }
            }
    
    
            for(int i=0;i<col;i++){
                int noz=0;
                int noo=0;
                for(int j=0;j<row;j++){
                    if(grid[j][i]==0) noz++;
                    else noo++;
                }
    
                if(noz>noo){
                    for(int j=0;j<row;j++){
                    if(grid[j][i]==1) grid[j][i]=0;
                    else grid[j][i]=1;
                }
                }
            }
    
            int sum=0;
            for(auto i:grid){
                sum+=convert(i);
            }
    
            return sum;
        }
    };
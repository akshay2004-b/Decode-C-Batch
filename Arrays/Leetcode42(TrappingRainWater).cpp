class Solution {
    public:
        int trap(vector<int>& height) {
            int n=height.size();
            vector<int> back(n);
            vector<int> front(n);
            int max=height[0];
            back[0]=-1;
            for(int i=1;i<n;i++){
                back[i]=max;
                if(max<height[i]) max=height[i];
            }
    
            front[n-1]=-1;
            max=height[n-1];
            for(int i=n-2;i>=0;i--){
                front[i]=max;
                if(max<height[i]) max=height[i];
            }
    
            vector<int> res (n);
            for(int i=0;i<n;i++){
                res[i]=min(front[i],back[i]);
            }
            int result=0;
            for(int i=1;i<n-1;i++){
                if(height[i]<res[i]) result+=res[i]-height[i];
            }
    
            return result;
        }
    };
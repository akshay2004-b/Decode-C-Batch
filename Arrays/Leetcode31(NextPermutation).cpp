class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
           int ptr=nums.size()-1;
           int idx=-1;
           bool flag=true;
           while(ptr>0){
            if(nums[ptr]>nums[ptr-1]){
                idx=ptr-1;
                flag=false;
                break;
            }
            ptr--;
           }
    
           if(flag){
            sort(nums.begin(),nums.end());
            return;
           }
    
           int tar=idx+1;
           sort(nums.begin()+idx+1,nums.end());
           for(int i=idx+1;i<nums.size();i++){
            if(nums[i]>nums[idx]){
                tar=i;
                break;
            }
           }
            swap(nums[tar],nums[idx]);
            sort(nums.begin()+idx+1,nums.end());
            
        }
    };
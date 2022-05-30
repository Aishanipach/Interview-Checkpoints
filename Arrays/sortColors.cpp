class Solution {
public:
    void sortColors(vector<int>& nums) {
        
       
        int c0=count(nums.begin(), nums.end(), 0);
       int c1=count(nums.begin(), nums.end(), 1);
        
        
        for(int i=0;i<nums.size();i++){
            
            if(i<c0)
                nums[i]=0;
            
            else if(i<c0+c1)
                nums[i]=1;
            
            else
                nums[i]=2;
            
            
        }
    }
};

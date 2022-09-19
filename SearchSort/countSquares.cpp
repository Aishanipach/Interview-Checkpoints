class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int n=target;
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==n)
                return i;
            
            else if(n>nums[i])
                break;
        }
        
        for(int j=nums.size()-1;j>=i;j--)
        {
            if(nums[j]==n)
                return j;
            
        }
        
        return -1;
        
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        int i=0;
        
        if(nums.size()==0 )
            return 0;
        
        for(int k=1;k<nums.size();k++){
            if(nums[k]!=nums[i]){
                i++;
                nums[i]=nums[k];
                
            }
        }
        return i+1;
    }
};

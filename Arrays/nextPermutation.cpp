class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int len= nums.size()-1;
        int index1=0, index2=-1;
        int i=0;
        for(i=len-1;i>=0;i--)
        {
            if((nums[i]<nums[i+1]))
             {   
                index1=i;
               
                 break;
             }
            
        }
        
        if(i<0)                                     //if the above condition is not met at all
        {
            reverse(nums.begin(), nums.end());
        }
        
        else
        {
             for(index2=len;index2>index1;index2--)
            {
                if(nums[index2]>nums[index1])
                    break;
            }
            

            {
                swap(nums[index1], nums[index2]);
                reverse(nums.begin()+index1+1,nums.end());
            }
        }
        
        
    }
};

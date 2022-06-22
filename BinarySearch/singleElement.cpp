class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int lo=0;
        int hi=nums.size()-2;
        
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            
            if(nums[mid]==nums[mid^1]) //XOR with 1 gives you prev even position for odd pos and gives you next index for even index
                
            {
                lo=mid+1;
            }
            
            else
                hi=mid-1;
    }
    return nums[lo];
    }
    
    
};

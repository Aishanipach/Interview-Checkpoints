class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int max_one=0;
        int curr=0;
        
        for(int i=0;i<nums.size();i++){
            // cout<<curr<<max_one<<" ";
            if(nums[i]==1){
                curr++;
            }
            
            else if(max_one<curr){
                max_one=curr;
                curr=0;
            }
            
            else{
                curr=0;
            }
        }
        
      
      //Ending with one
        if(max_one<curr){
                max_one=curr;
                curr=0;
            }
        
        return max_one;
    }
};

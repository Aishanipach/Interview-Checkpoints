class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1;
        vector<int> prod(nums.size(), 1);

        for(int i=0;i<nums.size();i++){
            
            prod[i]=left;
            left*=nums[i];
        }

        left=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod[i]*=left;
            left*=nums[i];
        }
       
        return prod;
    }
};

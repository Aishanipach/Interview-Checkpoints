int maximumNonAdjacentSum(vector<int> &nums){
    vector<int> dp(nums.size(), -1);
    
    dp[0]=nums[0];
    
    for(int i=1;i<nums.size();i++){
        int leftr=nums[i];
        if(i>1)
            leftr+=dp[i-2];
        
        int rightr=dp[i-1];
        
        dp[i]=max(rightr, leftr);
    }
    
    return dp[nums.size()-1];
    
}

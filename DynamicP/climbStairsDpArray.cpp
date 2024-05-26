class Solution {
public:
    
    int dpClimb(int n, vector<int> &dp){
         
        if(n==2)
            return 2;
        if(n==1)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];
        int q1, q2;
        
        for(int cur=3;cur<=n;cur++){

            q1=dpClimb(n-1,dp);
            q2=dpClimb(n-2, dp);

            dp[n]=q1+q2;
        }
        
        return dp[n];
        
    }
    int climbStairs(int n) {
        
        vector<int> dp(n+1, -1);
        
        return dpClimb(n, dp);
        
        
       
    }
};

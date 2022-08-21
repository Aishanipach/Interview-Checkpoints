
int getWays (vector<int> &num, int n, int tar, vector<vector<int>> &dp){
  
    for(int i=0;i<n+1;i++){
        dp[i][0]=1;
    }
    if(num[0]==0)
        dp[0][0]=2;
    else
        dp[0][0]=1;
        
        
     if(num[0]!=0 && num[0]<=tar) //when num == tar
        dp[0][num[0]] = 1;
    
    for(int i =1;i<num.size();i++){
        for(int k=0;k<=tar;k++){
            int notTake= dp[i-1][k];
            
             int take=0;
             if(k>=num[i])
            take=dp[i-1][k-num[i]];
       
           
       dp[i][k]=take+notTake;
        }
    }
    
    return dp[n][tar];
}
int findWays(vector<int> &num, int tar)
{
    vector<vector<int>> dp(num.size(), vector<int>(tar+1, 0));
    return getWays(num,num.size()-1, tar, dp);
}

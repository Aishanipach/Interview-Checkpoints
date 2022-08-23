int mod=int(1e9+7);

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
       
           
       dp[i][k]=(take+notTake)%mod;
        }
    }
    
    return dp[n][tar];
}


int countPartitions(int n, int d, vector<int> &arr) {
   
    int tot=0;
    
    for(auto &it :arr){
        tot+=it;
    }
    int tar=0;
    if (tot<d || (tot-d)%2==1){
    
        return false;
    }
    else
     tar= (tot-d)/2;
    
    vector<vector<int>> dp(arr.size(), vector<int>(tar+1, 0));  
    return getWays(arr, arr.size()-1, tar, dp);
    
}



//Easy- BottomUp approach recursive


#include <bits/stdc++.h>

int dpFrogJump(int n, vector<int> heights, vector<int> &dp){
    
   dp[0]=0;
    for(int i=1;i<=n;i++){
       
            
    int leftr=dp[i-1]+abs(heights[i]-heights[i-1]);
    
    int rightr=INT_MAX;
    if(i>1)
        rightr=dp[i-2]+ abs(heights[i]-heights[i-2]);
    
     dp[i]=min(leftr,rightr);
    }
    
    return dp[n];
}


int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1, -1); 
    return dpFrogJump(n-1, heights, dp);
}

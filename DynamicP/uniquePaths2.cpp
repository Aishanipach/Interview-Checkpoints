#include<bits/stdc++.h>
int mod= (int)(1e9+7);
int findPathsTwo(int n, int m, vector<vector<int>> &mat, vector<vector<int>> &dp){
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(mat[i][j]==-1)
            {
                dp[i][j]=0;
//             cout<<dp[i][j]<<" ";
                
                 continue;
            }
            
            if(i==0 && j==0){
                dp[i][j]=1;
                continue;
            }
            
            int up=0, left=0;
            
            if(i>0)
            up=dp[i-1][j];
            
            if(j>0)
            left=dp[i][j-1];
            
            dp[i][j]=(up+left)%mod;
//             cout<<dp[i][j]<<" ";
            }
//             cout<<endl;
        }
    return dp[n-1][m-1];
    }




int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    
    vector<vector<int> > dp(n+1,vector<int>(m+1,INT_MIN));
//     return mazeObstaclesUtil(n,m, mat, dp);
    return findPathsTwo(n, m, mat, dp);
}

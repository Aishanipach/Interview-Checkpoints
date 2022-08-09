#include<bits/stdc++.h>
int getPath(vector<vector<int>> &grid,vector<vector<int>> &dp, int n, int m){
     vector<int> prev(n+1, 0);
    for(int i=0;i<=n;i++){
       vector<int>cur(m+1,-1 );
        for(int j=0;j<=m;j++){
            
            if(i==0 && j==0){
               cur[j]= grid[0][0];
                
               continue;
            }
            
           //cout<<i<<j;
            int up = grid[i][j];
                if(i>0) up += prev[j];
                else up =INT_MAX;
                
                int left = grid[i][j];
                if(j>0) left+=cur[j-1];
                else left = INT_MAX;
                
                cur[j] = min(up,left);
           
        }
         prev=cur;
    
    }
       
        return prev[m];
}

int minSumPath(vector<vector<int>> &grid) {
 
    
    int n=grid.size()-1;
    int m= grid[0].size()-1;
    vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
    return getPath(grid,dp, grid.size()-1, grid[0].size()-1);
}

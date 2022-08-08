#include<bits/stdc++.h>
int mod= (int)(1e9+7);
int findPathsTwo(int n, int m, vector<vector<int>> &mat, vector<vector<int>> &dp){
    vector<int> prev(m,0);
    for(int i = 0;i<n;i++){
        vector<int> temp(m,0);
        for(int j=0;j<m;j++){
            
            if(mat[i][j]==-1)
            {
                temp[j]=0;
//             cout<<dp[i][j]<<" ";
                
                 continue;
            }
            
            if(i==0 && j==0){
                temp[j]=1;
                continue;
            }
            
            int up=0, left=0;
            
            if(i>0)
            up=prev[j];
            
            if(j>0)
            left=temp[j-1];
            
            temp[j]=(up+left)%mod;
//             cout<<dp[i][j]<<" ";
            }
            prev=temp;
        }
    return prev[m-1];
    }



int getMaxPathSum(vector<vector<int>> &matrix)
{
    vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),0));
    vector<int> prev(matrix[0].size(), 0);
    for(int j=0;j<matrix[0].size();j++){
        
        prev[j]=matrix[0][j];
    }
    for(int i=1;i<matrix.size();i++){
        vector<int> cur(matrix[0].size(), 0);
        for(int j=0;j<matrix[0].size();j++){
            
            
            int s=-1e9, l=-1e9,r=-1e9;
            
            s=matrix[i][j]+prev[j];
            if(j>0)
                l=matrix[i][j]+prev[j-1];
            
            if(j<matrix[0].size()-1)
                r=matrix[i][j]+prev[j+1];
        
            cur[j]=max(s,max(l,r));
        }
        prev=cur;
        
    }
    int maxi=-1e9;
    for(int k=0;k<matrix[0].size();k++){
        maxi=max(maxi, prev[k]);
    }
    
    return maxi;
}

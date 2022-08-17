bool subsetSumToK(int n, int k, vector<int> &arr) {
    
   vector<bool> prev(k+1, 0);
   
    vector<bool>cur(k+1,0);
    prev[0]=true;
    cur[0]=true;
    
    
    if(arr[0]<=k)
        prev[arr[0]] = true;
   
   
    for(int i=1;i<n;i++){       
        for(int t=1;t<=k;t++){
            
            bool notTake= prev[t];
            
            bool take=false;
            
            if(arr[i]<=t )
                take=prev[t-arr[i]];
            cur[t]=take | notTake;
        }
        prev=cur;
    }
    
    return prev[k];
}

int Solution::lis(const vector<int> &A) {
    vector<int> dp(A.size()+1, 1); //length

    dp[0]=1;

    for(int i=1;i<A.size();i++){
       
       for (int j = 0; j < i; j++){
            if (A[i] > A[j] && dp[i] < dp[j] + 1) //checking element behind that position is smaller & whether the current length till that index is smaller than adding 1 to the length in this specific path
                dp[i]=dp[j]+1;
                
    }        
    
    }   
    
    return *max_element(dp.begin(), dp.end());
    
}


class Solution:
{
  public:
  
  void fibo(int n, vector<int> &dp){
    
    if(n<=1)
      return n;
    
    if(dp[n]!=-1)
      return dp[n];
    
    return dp[n]=fibo(n-1, dp)+fibo(n-2, dp);
    
    
    
  }
  
  vector<int> solve(n){
    vector<int> dp(n,-1);
    
    fibo(n, dp);
    return dp;
  }

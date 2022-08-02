//Consider circular array, end element and first element are taken as adjacent elements 

long long int robberLogic(vector<long long int> &ans){
    int num=ans.size();
    vector<long long int> dp(num,-1);
    
    dp[0]=ans[0];
    for(int i=1;i<num;i++){
        
        long long int leftr= ans[i];
        if(i>1)
            leftr+=dp[i-2];
        
        long long int rightr= dp[i-1];
    dp[i]=max(leftr, rightr);    
    }
    
    return dp[num-1];
}


long long int houseRobber(vector<int>& valueInHouse)
{
    int n=valueInHouse.size();
    vector<long long int> case1;
    vector<long long int> endcase;

    if(n==1)
        return valueInHouse[0];
    for(int i=0;i<n;i++){
        
        if(i!=0)
            case1.push_back(valueInHouse[i]);
        
        if(i!=n-1)
            endcase.push_back(valueInHouse[i]);
        
    }

    return max(robberLogic(case1), robberLogic(endcase));

}

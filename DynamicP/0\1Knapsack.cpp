
int fillsack(vector<int> weight, vector<int> value, int n, int maxWeight){
    vector<int> cur( maxWeight+1,0);
    vector<int> prev( maxWeight+1,0);
    
   
    for(int i=weight[0];i<=maxWeight;i++){
        prev[i]=value[0];
    }
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<=maxWeight;j++){
             int notTake=prev[j];
            int take=INT_MIN;
            if(weight[i]<=j)
                take=value[i]+prev[j-weight[i]];
           
            
           cur[j]= max(take, notTake);
   
        }
       prev=cur;
        }
    
     return prev[maxWeight];
   
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    //int ans=0;
	return fillsack(weight, value, n-1, maxWeight);
    
}

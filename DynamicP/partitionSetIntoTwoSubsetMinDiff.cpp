int minSubsetSumDifference(vector<int>& nums, int n)
{
	      int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    
    int target =sum;
    
    vector<bool> prev(target+1, false);
    vector<bool> cur(target+1, false);
    
    prev[0]=true;
    cur[0]=true;
    if(nums[0]<target)
        prev[nums[0]]=true;
    for(int i=1;i<nums.size();i++){
        for(int k=1;k<=target;k++){
            
            bool notTake= prev[k];
            
            bool take=false;
            
            if(nums[i]<=k){
                take=prev[k-nums[i]];
                
            }
            cur[k]=take | notTake;

    
        }
        prev=cur;
    }
    
        int mini=1e9;
        for(int j=0;j<=sum/2;j++){
            
            if(prev[j]==true)
            mini=min(mini, abs((sum-j)-j));
        }
        
        return mini;
    }


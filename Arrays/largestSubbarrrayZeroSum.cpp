class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        
        map<int, int> currsum;
        int maxx=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            
            if(sum==0){
                maxx++;
            }
            
            else{
                if(currsum.find(sum)!=currsum.end()){
                    maxx=max(maxx, i-currsum[sum]);
                }
                else{
                    currsum[sum]=i;
                }
            }
        }
        return maxx;
    }
};

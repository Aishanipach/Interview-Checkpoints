class Solution
{
public:

void recurf(int curindex, int sum, vector <int> &arr, vector <int> &ans, int n){
    
    if(curindex==n){
        ans.push_back(sum);
        return ;
    }
    
    //Selecting a given index
    
    recurf(curindex+1, sum+arr[curindex], arr, ans, n);
    
    //Not selecting a given index
     recurf(curindex+1, sum, arr, ans, n);
    
}

public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector <int> ans;
        
        int sum=0;
        recurf(0, sum, arr, ans, N);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

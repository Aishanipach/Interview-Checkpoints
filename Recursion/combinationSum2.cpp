class Solution {

    public:
    void targetSum(vector<int> &arr, int target, int index, vector<vector<int>> &ans,vector<int> &curr){
       
           if(target==0){
                ans.push_back(curr);
                return;
        }
        
        for(int i =index; i<arr.size();i++){
            
            
            if(i>index && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            
            curr.push_back(arr[i]);
            targetSum(arr, target-arr[i], i+1, ans, curr);
            curr.pop_back();

            
        }
      
    }
    
    
    public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> curr;
        targetSum(candidates, target, 0, ans, curr);
      
        return ans;
        
        
    }
    

};

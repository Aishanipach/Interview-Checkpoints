class Solution {

    public:
    void targetSum(vector<int> &arr, int target, int index, vector<vector<int>> &ans,vector<int> &curr){
        if(index==arr.size()){
            if(target==0)
                ans.push_back(curr);
            
            return;
        }
        
        if(arr[index]<=target){
            curr.push_back(arr[index]);
            targetSum(arr, target-arr[index], index, ans, curr);
            curr.pop_back();
            
            
        }
        
        //Not picking up
        targetSum(arr, target, index+1, ans, curr);
        
        
        
    }
    
    
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       
        vector<vector<int>> ans;
        vector<int> curr;
        targetSum(candidates, target, 0, ans, curr);
      
        return ans;
        
        
    }
    

};

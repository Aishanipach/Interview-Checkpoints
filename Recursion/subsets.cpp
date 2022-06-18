class Solution {
    
public:
    void findSubSum(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int index){
        
        ans.push_back(ds);
        
        for(int i=index;i<nums.size();i++){
            
            if(i!=index && nums[i-1]==nums[i]) continue;
            cout<<nums[i];
            ds.push_back(nums[i]);
            findSubSum(nums, ans, ds, i+1);
            ds.pop_back();
        }
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        findSubSum(nums, ans, ds, 0);
        
        return ans;
        
    }
};

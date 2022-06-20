class Solution {
    public:
    void percComb(int index, vector<int> &arr, vector<vector<int>> &ans){
        
        if(index==arr.size()){
            ans.push_back(arr);
            return;
            
        }
        
        for(int i=index;i<arr.size();i++){
            swap(arr[i], arr[index]);
            percComb(index+1, arr, ans);
            swap(arr[i], arr[index]);
        }
        
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        percComb(0, nums, ans);
        
        return ans;
    }
};

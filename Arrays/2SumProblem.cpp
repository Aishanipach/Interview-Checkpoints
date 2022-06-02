class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> summap;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(summap.find(target-nums[i])!=summap.end()){
                //we are saving index as the main value in map and its index is the value
                ans.push_back(summap[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            
            summap[nums[i]]=i; 
        }
        return {};
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque <int> dq;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            
            if(!dq.empty() && dq.front()==i-k) 
                //checking for an element just before the subarray starts, i-k
                dq.pop_front();
            
            while (!dq.empty() && nums[dq.back()]< nums[i])
                dq.pop_back();
            
            dq.push_back(i);
            
            if(i>=k-1) //because after index 2 the next subarray can be formed
                ans.push_back(nums[dq.front()]);
            
        }
        
        return ans;
        
    }
};

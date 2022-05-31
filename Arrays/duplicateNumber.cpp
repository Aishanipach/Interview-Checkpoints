//leetcode.com/problems/find-the-duplicate-number/solution/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return 0;
    }
};


// Recursion:

class Solution {
public:
    int store(vector<int>& nums, int cur) {
        if (cur == nums[cur])
            return cur;
        int nxt = nums[cur];
        nums[cur] = cur;
        return store(nums, nxt);
    }
    
    int findDuplicate(vector<int>& nums) {
        return store(nums, 0);
    }
};

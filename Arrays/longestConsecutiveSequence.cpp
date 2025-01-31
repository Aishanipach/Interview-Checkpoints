class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        if(n==0) return 0;

        int longest =1;
        unordered_set<int> daily_set(nums.begin(), nums.end());

        for(auto it: daily_set){

            if(daily_set.find(it-1) == daily_set.end()){
                int count=1;
                int x=it;
                while(daily_set.find(x+1)!=daily_set.end()){
                    count++;
                    x++;
                }
                longest=max(longest, count);
            }
          
        }
          return longest;
    }
};

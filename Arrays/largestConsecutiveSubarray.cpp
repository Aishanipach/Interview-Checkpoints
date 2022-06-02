class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> hash;
        
        for(int num:nums){
            hash.insert(num);
        }
        
        int longest=0;
        
        for(int num:nums){
            
            if(!hash.count(num-1)){
                int currentnum=num;
                int currlength=1;
                
            
            
                 while(hash.count(currentnum+1)){
                    currentnum+=1;
                    currlength++;
                }
               longest=max(longest, currlength);
            }
             
        }
       return longest; 
    }
};

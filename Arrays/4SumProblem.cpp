class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        if(nums.size()==0){
            return ans;
        }
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                int reminder= target-(nums[i]+nums[j]);
                
                int front=j+1;
                int end=nums.size()-1;
                
                // cout<<reminder<<" "<<front<<" "<<end<<endl;
                
                while(front<end){
                    
                    if(reminder>nums[front]+nums[end]){
                        front++;
                    }

                    else if(reminder<nums[front]+nums[end]){
                        end--;
                    }
                    
                    else{
                        vector<int> quad(4,0);
                        quad[0]=(nums[i]);
                        quad[1]=(nums[j]);
                        quad[2]=(nums[front]);
                        quad[3]=(nums[end]);
                        ans.push_back(quad);
                        
                        //Removing duplicate for front & end
                        
                        while(front<end && quad[2]==nums[front])
                            ++front;
                        
                        while(front<end && quad[3]==nums[end])
                            --end;
                    }
                    
                }
                
                while(j+1<nums.size()&&nums[j]==nums[j+1])
                    ++j;
                
            }
            while(i+1<nums.size()&&nums[i]==nums[i+1])
                    ++i;
        }
        
        return ans;
    }
};

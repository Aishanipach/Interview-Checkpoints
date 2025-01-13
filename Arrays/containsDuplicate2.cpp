class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i=0;i<nums.size();i++){

            if(mp.find(nums[i])!= mp.end()){
                cout<<mp.find(nums[i])->second<<i;
                if(abs(mp.find(nums[i])->second-i)<=k){

                    return true;
                }
                else{
                     mp[nums[i]]=i;
                }
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return false;

    }
};

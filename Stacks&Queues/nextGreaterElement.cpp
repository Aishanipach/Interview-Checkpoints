class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
                
        map <int, int> nextG;
        stack<int> s;
        
        
        int n= nums1.size();
        int m=nums2.size();
        
        for(int i=m-1;i>=0;i--){
            
             while(s.size()>0 and s.top()<nums2[i]){
                s.pop();
            }
            
            if(s.size()>0 and s.top()>nums2[i]){
                nextG[nums2[i]]= s.top();
            }
            
            else{
                nextG[nums2[i]]= -1;
            }
            
            s.push(nums2[i]);
        }
        
        vector<int> ans;
         for(int i=0;i<nums1.size();i++){
            ans.push_back(nextG[nums1[i]]);
        }
        return ans;
    }
};

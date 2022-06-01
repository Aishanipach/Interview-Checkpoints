// Frequency more than n/3

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=-1;
        int n2=-1;
        
        int frq1=0;
        int frq2=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
             
            
            if(nums[i]==n1)
                frq1++;
            
            else if(nums[i]==n2)
                frq2++;
            
            else if(frq1==0){
                n1=nums[i];
                frq1=1;
            }
            
            else if(frq2==0){
                n2=nums[i];
                frq2=1;
            }
                
            else{
                frq1--;
                frq2--;
            }
                
        }
       
        // counting their majority numbers' occurence
        vector<int> ans;
        frq1=0;
        frq2=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n1)
                frq1++;
            else if(nums[i]==n2)
                frq2++;
        }
       
      
        if(frq1>n/3 )
            ans.push_back(n1);
        
        if(frq2>n/3 )
            ans.push_back(n2);
            
        
        
        
       return ans;
        
        
    }
};

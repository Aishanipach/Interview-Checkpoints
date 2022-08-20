 vector<int> singleNumber(vector<int> nums) 
    {
        
        int Xor=0;
        for(int i=0;i<nums.size();i++){
            Xor^=nums[i];
            
            
        }
        
        int x=0;
        int y=0;
        
        
        //Getting rightmost set bit
        int set_bit=Xor & ~(Xor-1);
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] & set_bit){
                x=x^nums[i];
                
            }
            
            else{
                y=y^nums[i];
            }
        }
        
        return {x,y};
    }

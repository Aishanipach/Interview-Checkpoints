class Solution {
public:
    int trap(vector<int>& arr) {
        
        
        int l=0;
        int r=arr.size()-1;
        int rmax=0;
        int lmax=0;
        int res=0;
        
       
            while(l<=r){

                if(arr[l]<=arr[r])
                {
                    if(arr[l]>=lmax)
                       
                            lmax=arr[l];
                            
                        
                    else
                        res+=lmax-arr[l];
                        
                    l++;
                    
                        

                }
                
                else
                {
                    
                    if(rmax<=arr[r])
                        rmax=arr[r];
                   
                    
                    else
                        res+=rmax-arr[r];
                        
                    r--;
                    
                    
                }

            }
        
        return res;
        
    }
};

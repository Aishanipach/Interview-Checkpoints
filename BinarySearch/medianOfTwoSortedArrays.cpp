class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2, nums1); 
        //Calling function with a smaller array
        
        int n1=nums1.size();
        int n2=nums2.size();
        
        int lo=0; 
        int hi=n1;
        
        while(lo<=hi){
            
            int cut1=(lo+hi)>>1;
            int cut2=(n1+n2+1)/2-cut1;
            
            int left1= cut1==0 ? INT_MIN : nums1[cut1-1];
            int left2= cut2==0 ? INT_MIN : nums2[cut2-1];
            
            int r1= cut1==n1? INT_MAX : nums1[cut1];
            int r2= cut2==n2? INT_MAX : nums2[cut2];
            
            if(left1<=r2 &&left2<=r1)
            {
                if((n1+n2)%2==0){
                    return (max(left1, left2)+min(r1, r2))/2.0;
                }
                
                else{
                   return  max(left1,left2);
                }
            }
            
            else if(left1>r2){
                hi=cut1-1;
                
            }
            
            else{
                lo=cut1+1;
            }
        }
        
        return 0.0;
    }
};

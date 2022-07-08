class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int gap=ceil(float)(n+m)/2;
        int j=gap;

        while(gap>0){
          while(j<m+n){
            if(j<m && nums1[j]<nums1[1])
               swap(nums1[j],nums1[i]);
            else if(j>=m && i<m && nums2[j-m]<nums1[i])
               swap(nums2[j-m], nums1[i]);
            else if(j>=m && i>m && nums2[j-m]<nums2[i-n])
               swap(nums2[j-m], nums2[i-n]);

            i++; j++;
          }
          if(gap==1)
            gap=0;
          else
            gap=ceil(gap/2);

        }
    }
};

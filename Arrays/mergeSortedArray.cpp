class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=n;
        int k=0;
        while(i!=0){
         
            nums1.at(m+k)=*(nums2.begin()+k);
            i--;
            k++;
        }
        
        sort(nums1.begin(), nums1.end());
    }
};

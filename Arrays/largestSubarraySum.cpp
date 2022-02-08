//Kadane's Algo

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long max_sum_current=arr[0];
        long long max_ends=arr[0];
        
        for(int i=1;i<n;i++){
            max_sum_current+=arr[i];
            
            if(max_sum_current>max_ends){
                max_ends=max_sum_current;
                
            }
            
            if(max_ends<arr[i]) {
                max_ends=arr[i];
                max_sum_current=arr[i];
            }
            
            if(max_sum_current<arr[i]){
                max_sum_current=arr[i];
            }
        }
       return  max_ends;
    }

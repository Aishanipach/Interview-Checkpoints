class Solution {
public:
  int kthSmallest(vector<int> arr,k){
    
    priority_queue <int> maxheap;
    
    for(int i=0;i<n;i++)
    {
      maxheap.push(arr[i]);
      
      if(maxheap.size()>k)
        maxheap.pop();
      
    }
    
    return maxheap.top();
              
  }
                
               
};

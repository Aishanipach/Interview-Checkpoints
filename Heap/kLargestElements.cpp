//smallest goes on top so we take min heap

class Solution:{
  public:
  
  vector<int> getKLargest(vector<int> arr){
    
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    for(int i=0;i<n;i++){
      minheap.push(arr[i]);
      
      if(minheap.size()>k){
        minheap.pop();
      }
    }
    
    vector<int> ans(minheap);
    return ans;
  }
};

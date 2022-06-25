//We need k numbers that have least difference from the given number, i.e. x, so we use maxheap

class Solution{
  public:
  
  void kClosestNumbers( vector<int> arr, int k, int x){
    priority_queue <pair<int, int>> maxheap;
    
    for(int i=0;i<n;i++){
       maxheap.push(make_pair(abs(arr[i]-x), arr[i]));
       if(maxheap.size()>k)
        maxheap.pop();
    }
    
    while(maxheap.size()){
      cout<<maxheap.top.second<<" ";
      maxheap.pop();
    }
   
  }
};

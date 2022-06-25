//We need min value at top for optimum ans, so min heap


class Solution{
  public:
  
  void connectNRopes(vector<int> arr){
    
    priority_queue< int, vector<int>, greater<int>> minheap;
    int cost=0;
    for(int i=0;i<n;i++)
    {
      minheap.push(arr[i]);
    }
    
    while(minheap.size()>2){
      int first= minheap.top();
      minheap.pop();
      
      int second=minheap.top();
      minheap.pop();
      
      cost+=first+second;
      minheap.push(first + second);
    }
    
    cout<<cost;
  }
};

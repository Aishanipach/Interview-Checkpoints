//Greedy 

vector<int> FindCoin(int V){

  vector <int> deno={ 1, 2, 5, 10, 50, 100, 200, 500, 2000};
  int n =9;
  
  vector<int> ans;
  
  for(int i=n-1;i>=0;i--){
    while(V>=deno[i]){
      
      V=V-deno[i];
      ans.push_back(deno[i]);
    }
    
  }
  
  return ans;
}

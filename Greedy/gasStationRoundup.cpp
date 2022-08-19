int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    
    int totalCost=0;
    int currCost=0;
    int ind=0;
    for(int i=0;i<A.size();i++){
        totalCost+= (A[i]-B[i]);
        currCost+=(A[i]-B[i]);
        
        
        if(currCost<0)
        {
            currCost=0;
            ind=i+1;
        }
         // cout<<currCost<<endl;
        
    }
    
    if(totalCost>=0)
        return ind;
  
    return -1;
}

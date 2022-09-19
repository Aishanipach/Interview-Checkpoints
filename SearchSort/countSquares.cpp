//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        
        int n=sqrt(N);
        if(N==0 || N==1)
            return 0;
        
        int count=1;
        
        while(n>1){
            if(n*n<N){
                count++;
                n--;
                
            }
            
            else
                n--;
        }
        
       return count;
    }
};

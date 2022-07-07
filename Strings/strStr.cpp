//String match
//KMP Algo>> Rabin Karp
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        
        vector<int> pa(n,0);
        
        int i=1, j=0;
        
        while(i<n){
            
            if(needle[i]==needle[j]){
                pa[i]=j+1;
                i++;
                j++;
            }
            
            else{
                
                if(j!=0){
                    j=pa[j-1];
                }
                
                else{
                    pa[i]=0;
                    i++;
                }
            }
        }
        
        i=0;
        j=0;
        
        while(i<m && j<n){
            if(needle[j]==haystack[i]){
                i++;
                j++;
                
            }
            
            else if(needle[j]!=haystack[i]){
                if(j!=0){
                    j=pa[j-1];
                    
                }
                
                else{
                    i++;
                }
            }
            
        
       
        }
        
        if(j==n)
            return i-n;
          return -1;   
            
    }
};

class Solution {
public:
    string reverseWords(string s) {
        
        
        string temp="";
        string ans="";
        
        int r=s.size()-1;
      
        for(int l=0;l<=r;l++){
            
            if(s[l]!=' ')
                temp+=s[l];
            
            else if(s[l]==' ' && l!=r && s[l+1]!=' '){
                
                if(ans=="")ans=temp;
                else ans=temp+" "+ans;
                temp="";
            }
        }
        
        //As there is no space at the end the last word is not added
      if(temp!=""){
        if(ans=="")ans=temp;
        else ans=temp+" "+ans;
               
          
      }
        
        return ans;
    }
};

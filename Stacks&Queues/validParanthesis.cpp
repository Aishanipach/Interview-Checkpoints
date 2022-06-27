class Solution {
public:
    bool isValid(string s) {
        stack <int> bin;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                bin.push(s[i]);
                
            }
            
            else{
                if(bin.empty())
                    return false;
                
                char c=bin.top();
                bin.pop();
                
                if((s[i]==')' && c=='(') || (s[i]=='}'&& c=='{') || (s[i]==']' && c=='[')){
                    continue;
                    
                }
                
                else 
                    return false;
            }
        }
        
        if(bin.empty())
            return true;
        
        return false;
    }
};

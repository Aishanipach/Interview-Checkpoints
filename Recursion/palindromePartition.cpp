class Solution {
    public:
    
    bool palindromeCheck(int start, int end, string s){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
            
        }
        
        return true;
    }
    
    public:
    void subStringGen(string &s, vector<vector<string>> &ans, vector<string> path, int index){
        
        if(index==s.size()){
            ans.push_back(path);
            return;
        }
        
        for(int i=index;i<s.size();i++){
            if(palindromeCheck(index,i, s )){
                
                path.push_back(s.substr(index, i-index+1));
                subStringGen(s, ans, path, i+1);
                path.pop_back();
                
            }
        }
        
        
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        subStringGen(s, ans, path,0);
    
    return ans;
    }
    
    
};

class Solution {
public:

    string encode(vector<string>& strs) {
        string s= "";
        for(int i=0;i<strs.size();i++){
            char wordSize= strs[i].size();
            
            s+=to_string(wordSize);
            s+="#";
            s+=strs[i];
            
        }

        return s;
    }

    vector<string> decode(string s) {
        
        vector<string> ans;
        int currLength=0;
        string curr="";

        for(int i=0;i<s.size();i++){
            int asciiCheckForDigit=s[i];
            
            if(asciiCheckForDigit>=48  && asciiCheckForDigit<=57 && s[i+1]=='#'){
                currLength= asciiCheckForDigit-'0';
                i++;
            }
            else if(currLength>=1){
               
                while(currLength>=1 && i<s.size()){
                    curr+=s[i];
                    currLength--;
                    if(currLength>=1)
                    i++;
                    
                }
              
                ans.push_back(curr);
                curr="";

            }
            
            
        }
        return ans;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
    //base case
  if(s.length()!=t.length())
        return false;
		
		unordered_map<char,int> m;
    
    //store the count of each word
    for(int i=0; i<s.length(); i++)
    {
        m[s[i]]++;
    }
    
	//here decrease the corresponding count of word in map and check for available or not
    for(int j=0; j<t.length(); j++)
    {
        if(m[t[j]]>0)
        {
            
            m[t[j]]--;
        }
        else return false;
    }
    
    return true;      
    }
};

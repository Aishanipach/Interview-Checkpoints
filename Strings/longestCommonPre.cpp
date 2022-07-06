class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                
        string min=*min_element(strs.begin(),strs.end());  //smallest string
        string mx=*max_element(strs.begin(),strs.end()); //largest one
        cout<<min<<mx;
        int i=0;
        int j=0;
        
        while(i<min.size() and min[i]==mx[j]) {   //loop until characters are matching
            i++;
            j++;
        }
        return mx.substr(0,i);    //return substring till any index i or j answer will be same
    }
};


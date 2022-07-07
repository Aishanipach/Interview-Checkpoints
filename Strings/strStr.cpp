//String match
//KMP Algo>> Rabin Karp

int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        int i=1,j=0;
        vector<int> pa(m,0);
        //compute prefix array
        while(i<m)
        {
            if(needle[i]==needle[j])
            {
                pa[i]=j+1;i++;j++;
            }
            else {
                if(j!=0)
                {
                    j=pa[j-1];
                }
                else
                {
                    pa[i]=0;
                    i++;
                }
            }
        }
        i=0;j=0;
        while(i<n && j<m)
        {
            if(haystack[i]==needle[j])
            {
                i++;j++;
            }
            else if(haystack[i]!=needle[j])
            {
                if(j!=0)
                {
                    j=pa[j-1];
                }
                else
                {
                    i++;
                }
            }
            
        }
        
        if(j==m)
        {
            int index=i-m;
            return index;
        }
        return -1;
    }

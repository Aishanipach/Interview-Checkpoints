//Brute force approach

class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        
        int k=0;
        for(int i=0; i<v.size();i++)
        {
            k=0;
            for (int j=0;j<v[i].size();j++) 
            {
                    k++;
                    
                if(v[i][j]==0)
                {
                    int l=0;
                    while(l!=v[i].size())
                    {
                        if(v[i][l]!=0)
                            v[i][l]=-1111;
                        l++;
                    }
                    l=0;
                    while(l!=v.size())
                    {
                        if(v[l][j]!=0)
                            v[l][j]=-1111;
                        l++;
                    }
                    
                }
            }
        }
        for(int l=0;l!=v.size();l++){
            replace_if(v[l].begin(), v[l].end(), [](int x) {
                return x==-1111;
            }, 0);
        }
    }
};

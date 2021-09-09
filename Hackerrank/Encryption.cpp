#include<iostream>
#include <cmath>
using namespace std;


int main(){
    
    string s;
    getline(cin,s);

    int ans=s.size();
    
    int row=floor(sqrt(ans));
    int column=ceil(sqrt(ans));
   
   if((row*column)<s.size())
        row=column;
    
    for(int i=0;i<column;i++)
    {   int ctr=i;
        
        for(int j=0;j<row;j++)
        {
            if(ctr>=s.size())
            {
                ctr+=column;
                continue;
            }
            cout<<s[ctr];
           ctr+=column;
        }
        cout<<" ";
        
    }
    
return 0;
}

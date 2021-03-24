#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int n=s.length();
    
        if(s[n-2]=='A')
        {
            if(s[1]=='2'&&s[0]=='1')
            {
                s[0]='0';
                s[1]='0';
            }
            
            
        }
        
        else if(s[n-2]=='P')
        {
            if( (s[0]!='1') ||( s[1]!='2'))
            {
               
               
                int k=int(s[1]);
                
                k=k+2;
                s[1]=char(k);
                
                if(s[1]==':'||s[1]==';')
                 {
                   int k=int(s[0]);
                    k=k+2;
                    s[0]=k; 
                     
                    int i=int(s[1]);
                    
                    i=i-10;
                    s[1]=char(i);
                 }  
                else {
                    
                int k=int(s[0]);
                    k=k+1;
                    s[0]=k;
                }
            }
        }
    
    
    string ans;
   // ofstream fout(getenv("OUTPUT_PATH"));
    for(int i=0;i<n-2;i++)
        {
            ans[i]=s[i];
           cout<<ans[i];
        }
        
       // fout<<ans<<endl;
    return ans;
}

int main()
{
    
    string s;
    getline(cin, s);

    string result = timeConversion(s);
    
    return 0;
}

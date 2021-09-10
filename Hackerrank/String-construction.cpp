#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
    
    int t=0;
    cin>>t;
    int n=t;
    do{
        string s;
        getline(cin,s);
        int flag=0,amt=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                
                if(s[i]==s[j])
                {
                    flag=1;
                    break;
                }
                
            }
            
            if (flag!=1) {
                amt+=1;
                flag=0;
            }
            else
                flag=0;
        }
        if(n!=t)
            cout<<amt<<endl;
        n--;
    }while(n!=-1);
    
    return 0;
}

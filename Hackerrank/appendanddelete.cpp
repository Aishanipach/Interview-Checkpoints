#include<iostream>
#include<string>

using namespace std;

int main(){
    /*s: the initial string
    t: the desired string
    k: max no. of transformations allowed*/
    
    int k=0,moves=0;
    string s, t;
    
    cin>>s;
    cin>>t;
    
    cin>>k;
    int i;
    int len=(s.length()<t.length()?s.length():t.length());
    
    for(i=0;i<len;i++)
    {
        if(s[i]!=t[i])
        {
            break;        
        }
    }
    
    moves=(t.length()-i)+(s.length()-i);
    //cout<<i<<" "<<moves<<endl;
    
    //still moves i.e. k are left after minimum number of transformations
    while(moves<k)
    {
        if(i-->0)
        {
            moves+=2;
        }
        else 
            moves++;
        
    }
    //cout<<i<<" "<<moves<<endl;
   
    if(moves==k)
        cout<<"Yes";
    
    else if((moves<k)&& (i==0) )
        cout<<"Yes";
    else
        cout<<"No";
    
    return 0;
}

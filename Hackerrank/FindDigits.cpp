#include <iostream>
using namespace std;

int main(){
    
    int t=0; //number of cases
    cin>>t;
    
    do
    {
        int n=0;
        cin>>n;
        int dividend=n;
        int ctr=0;
        
        while(n!=0)
        {   
            int divisor=n%10;
            n=n/10;
            if(divisor==0)
                continue;
            
            else if(dividend%divisor==0)
            {
               ctr++; 
            }
        }
        
        
        t--;
        cout<<ctr<<endl;
    }while(t!=0);
  
    
    return 0;
}

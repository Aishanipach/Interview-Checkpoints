#include <iostream>
using namespace std;

int main()
{
    //k= jump size
    //n=size of cloud array
  
    int n, k;
    cin>>n>>k;
    
    int c[30]; //cloud array with boolean input     
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    
    int i=0;
    int e=100;
    
    do
    {
        i=(i+k)%n;
        
        if(c[i]==1)
           e-=2;
        
        e-=1;
      
    }while(i!=0);
    
    cout<<e;
    return 0;
}

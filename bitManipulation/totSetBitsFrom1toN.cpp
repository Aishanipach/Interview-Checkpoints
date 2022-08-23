  int countSetBits(int n)
    {
       int curpow=2;
        n++;
       
       int count=n/2;
       
       while(curpow<=n){
          
           int tot=n/curpow;
           
           count=count+(tot/2)*curpow;
           
           count+=(tot&1)?(n%curpow):0;
           
           curpow <<=1;
       }
        
        return count;
        
    }

long long divide(long long dividend, long long divisor) 
    {
        int sign=1;
        
        if(dividend<0 ^ divisor<0)
            sign=-1;
        
        
        divisor=(abs(divisor));
        dividend= abs(dividend);
        long long quot=0;
        long long temp=0;
        
        for(int i=31;i>=0;i--){
            
            if(temp+(divisor<<i)<=dividend){
                temp+=divisor<<i;
        
                quot|=1LL<<i;
            }
        }
        
        if(sign==-1)
            quot=-quot;
            
        return quot;
            
    }

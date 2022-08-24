 int setSetBit(int x, int y, int l, int r){
        
        
        if(l<1 || r>32){
            return false;
        }
        
        int i =l;
        int mask=0;
        while(i<=r){
            mask=1<<(i-1);
            
            if(y&mask){
                x=x|mask;
            }
            
            i++;
        }
        
        return x;
    }

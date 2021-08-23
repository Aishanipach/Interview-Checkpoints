int saveThePrisoner(int n, int m, int s) {
    
    //prisoners=n, sweets= m;
  
    int check=m/n;
    if((m+s-1)<=n) 
        return m+s-1;
        
    else
    {
            m = m - (n - s + 1);
            if(m%n == 0) 
                    return n;
            else 
                return m%n;
    }
}

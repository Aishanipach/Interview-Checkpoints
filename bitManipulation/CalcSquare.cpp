long long square(int n){
  if (n == 0)
        return 0;
 
    // Handle negative number
    if (n < 0)
        n = -n;
 
  int x= n>>1;
  int ans=0;
  //ODD
  if(n&1)
  {
     return ((square(x)<<2)+ x<<2+1);
  }
  
  else
    return (square(x)<<2);
  
}

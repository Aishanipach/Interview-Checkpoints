int Solution::solve(string s) {
    
     int n=s.size();

    int k=n;
     string text=s;
    reverse(text.begin(),text.end());

    s= s + "$" + text;

     n=s.size();

     vector<int> lps(n , 0);

     int i=1 , j=0;

     lps[0]=0;

     int maxe=0;

     while(i<n)
     {
         if(s[i]==s[j])
         {
             lps[i]=j+1;
             // means the longest prefix existing is of length j+1
             i++;
             j++;
         }
         else
         {
             if(j==0)
             {
                 lps[i]=0;
                 i++;
             }
             else{
                 j=lps[j-1];
             }
         }

         

     }

     return k-lps[n-1];



 
}


class Solution {
public:
    string intToRoman(int num) {
        
        map<int, char> roman ={{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};
        string ans;
        int count; // to get length of the number
        int n=num;
        
        while(n!=0)
            
        {
            n=n/10;
            
            ++count;
            
        }
        int k=count;
        
        while(k!=0)
        {
            cout<<int(num /(pow(10,k-1)))<<endl;
            
            int digit=int(num /(pow(10,k-1)));
            cout<<endl<<digit*(pow(10,k-1))<<endl;;
             //cout<<digit<<endl;
                    if((roman.find( digit*(pow(10,k-1)))) != roman.end())
                        ans.push_back(roman[digit*(pow(10,k-1))]);
                 
                     else if(digit>5)
                     {
                         int diff= 10-digit;
                         if(diff==1)
                           {
                               ans.push_back(roman[1*(pow(10,k-1))]);
                                ans.push_back(roman[1*(pow(10,k))]);

                           }
                         else
                         {      diff=digit-5;
                                 ans.push_back(roman[5*(pow(10,k-1))]);

                                 for(int i= diff; i!=0;i--)
                                    ans.push_back(roman[1*(pow(10,k-1))]);
                         }
                    }
                 
                 else if(digit<5)
                   {
                       int diff= 5-digit;
                       
                     if(diff==1)
                       {
                           ans.push_back(roman[1*(pow(10,k-1))]);
                            ans.push_back(roman[5*(pow(10,k-1))]);
                         
                       }
                     
                     else
                     {
                         
                       for(int i= digit; i!=0;i--)
                        ans.push_back(roman[1*(pow(10,k-1))]);
                     } 
                       
                     
                     
                   }
            num=num-digit*(pow(10,k-1));
            k--;
           // reverse(ans.begin(), ans.end());
        }
                   
        return ans;
                   
                   }
};
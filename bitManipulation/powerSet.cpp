	vector<string> AllPossibleStrings(string s){
		 
		 int n=s.size();
		 int setsol=1<<(n);
		 vector<string> final;
		 
		 for(int i=1;i<setsol;i++){
		     string ans="";
		     for(int j=0;j<s.size();j++){
		        
		         if(i &(1<<j)){
		             ans=ans+s[j];
		         }
		         
		        
		     }
		     //cout<<ans<<endl;
		      final.push_back(ans);
		 }
		 
		 sort(final.begin(), final.end());
		 return final;
		}

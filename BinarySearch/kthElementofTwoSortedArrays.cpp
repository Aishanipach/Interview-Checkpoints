// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m)
            kthElement(arr2, arr1, m, n, k);
            
        int lo=min(0, k-m);
        int hi=max(n, m);
        
        while(lo<=hi){
            int c1=lo+hi>>1;
            int c2= k-c1;
            
             int l1= c1==0 ? INT_MIN : arr1[c1-1];
            int l2= c2==0 ? INT_MIN : arr2[c2-1];
            
            int r1= c1==n? INT_MAX : arr1[c1];
            int r2= c2==m? INT_MAX : arr2[c2];
            
            if(l1<=r2 && l2<=r1 ){
                return (max(l1, l2));
            }
            
            else if(l1>r2)
                hi=c1-1;
            
            else 
                lo=c1+1;
        }
        
        return 1;
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends

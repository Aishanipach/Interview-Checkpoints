#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    int arr[60], ans[60];
    //vector<int> ans;
    
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    for(int k=0;k<n;k++)
    {
        int x=arr[(arr[k]-1)];
        ans[x-1]=k+1;
        
    }
    //cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;;
    }
    return 0;
}

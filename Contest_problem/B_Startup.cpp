#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while (t--)
   {
        int n,k;
        cin>>n>>k;
        vector<int>v(k+1,0);
        for (int i = 0; i < k; i++)
        {
            int a,b;
            cin>>a>>b;
            v[a]=v[a]+b; 
        }
        sort(v.rbegin(),v.rend());
        int sum=0;
        for (int i = 0; i <n && i<k; i++)
        {
            sum=sum+v[i];
        }
        cout<<sum<<endl;
        
        
        
   }
    
     
     
    return 0;
}
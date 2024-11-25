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
     int n,nor,mas;
     cin>>n>>nor>>mas;
     int a[n];
     int ans=0;
     for (int i = 0; i < n; i++)
     {
        int x;
        cin>>x;
        int const1=x*nor;
        if(mas>=const1)
        {
            ans+=const1;
        }else{
            ans+=mas;
        }
     }
     cout<<ans<<'\n';
     
   }
    
     
     
    return 0;
}
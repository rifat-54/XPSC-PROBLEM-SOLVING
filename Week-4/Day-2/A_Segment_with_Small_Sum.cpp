#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   cin>>n;
   long long k;
   cin>>k;
   vector<int>v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }

   int l=0,r=0,ans=0;
   long long sum=0;
   while (r<n)
   {
      sum+=v[r];
      if(sum<=k)
      {
        ans=max(ans,r-l+1);
        r++;

      }else{
        sum-=v[l];
        l++;
        r++;
      }
   }

   cout<<ans<<'\n';
   
    
     
     
    return 0;
}
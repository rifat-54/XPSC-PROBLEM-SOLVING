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
    int n;
    cin>>n;
    map<long,long>mp;
    for (long long i = 1; i <=n; i++)
    {
        long long x;
        cin>>x;
        mp[x]=i;
    }
    long long ans=0;
    for(auto [a,b]:mp){
        
        ans+=b;
    }
    cout<<ans<<'\n';
   }
    
     
     
    return 0;
}
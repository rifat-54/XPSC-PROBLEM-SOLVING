#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while (t--)
   {
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    ll sum=0;
    for (int i = 1; i <=n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    sort(v.begin(),v.end());

    ll ans=sum;

    for (int i = 1; i <=n; i++)
    {
        sum-=v[i];
        ans=max(ans,sum+(i*i));
    }

    cout<<ans<<'\n';
    
    
   }
    
     
     
    return 0;
}
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
    vector<long long >v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.rbegin(),v.rend());

    long long ans=v[0];
    long long sum=0;
    for (int i = 1; i < n; i++)
    {
        sum+=k;
        long long need=v[i]+sum;
        ans=max(ans,need);

    }

    cout<<ans<<'\n';
    
    
   }
    
     
     
    return 0;
}
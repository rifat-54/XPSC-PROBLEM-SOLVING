#include<bits/stdc++.h>
using namespace std;
const long long Mod=998244353;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while(t--){
    long long n;
    cin>>n;
    vector<long long>v(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    long long ans=1;

    for (long long i = 0; i < n; i++)
    {
        long long sel=v[i]-i;
       if(sel<=0){
        ans=0;
        break;
       }

       ans=(ans*sel)% Mod;
    }

    cout<<ans<<"\n";
    
    
   } 
     
     
    return 0;
}
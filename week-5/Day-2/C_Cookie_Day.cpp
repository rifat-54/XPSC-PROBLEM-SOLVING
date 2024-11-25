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
    long long n,k;
    cin>>n>>k;
    long long ans=INT_MAX;
    set<long long>s;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin>>x;
        if(x>=k){
        long long mod=x%k;
        ans=min(ans,mod);

        }
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<'\n';
    }else{
        cout<<ans<<'\n';
    }
    

   }
    
     
     
    return 0;
}
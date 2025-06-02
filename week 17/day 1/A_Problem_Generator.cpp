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
    int n,m;
    cin>>n>>m;
    map<char,int>mp;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        mp[x]++;
    }
    int ans=0;
    for(auto it:mp){
        // cout<<it.first<<" "<<it.second<<"\n";
        if(it.second<=m){
            ans=ans+(m-it.second);
        }
    }
    
    if(mp.size()<7){
        int need=7-mp.size();
        ans=ans+(need*m);
    }

    cout<<ans<<"\n";
    
   }
    
     
     
    return 0;
}
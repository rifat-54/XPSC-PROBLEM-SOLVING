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
    for (char i = 'A'; i < 'H'; i++)
    {
        // cout<<i<<"--> "<<mp[i]<<"\n";
        if(mp[i]<m){
            ans=ans+(m-mp[i]);
        }
    }
    cout<<ans<<"\n";
    
   }
    
     
     
    return 0;
}
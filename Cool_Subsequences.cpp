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
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans=0;
    for(auto val:mp){
        // cout<<val.first<<" "<<val.second<<"\n";
        if(val.second>=2){
            ans=val.first;
            break;
        }
    }
    if(ans){

    cout<<1<<"\n"<<ans<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    
   }
    
     
     
    return 0;
}
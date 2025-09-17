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
    bool exit1=false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x==1){
            exit1=true;
        }
        mp[x]++;
    }

    // multimap<int,int,greater<int>>multisort;

    int mx=0;

    for(auto v:mp){
        // cout<<v.first<<" "<<v.second<<"\n";
        if(v.second>mx){
            mx=v.second;
        }
        // multisort.insert({v.second,v.first});
    }
    // cout<<"mx-> "<<mx<<"\n";

    int ans=0;
    if(mx==1){
        ans=n-1;
    }else{

        ans=1+(n-mx);
    }

    cout<<ans<<"\n";

    // for(auto a:multisort){
    //     cout<<a.first<<" "<<a.second<<"\n";
    // }

    
   }
    
     
     
    return 0;
}
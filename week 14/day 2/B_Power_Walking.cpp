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


    // sort(mp.begin(),mp.end());
    vector<int>v;

    for(auto val:mp){
        v.push_back(val.second);
    }

    sort(v.begin(),v.end());

    for(int c:v){
        cout<<c<<" ";
    }
    cout<<'\n';

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<i<<"-> "<<mp[i]<<'\n';
    // }
    cout<<"\n";
    
    
   }
    
     
     
    return 0;
}
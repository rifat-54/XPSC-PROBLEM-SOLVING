#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
        map<pair<string,string>,bool>mp;
   while (t--)
   {
        string a,b;
        cin>>a>>b;
        mp[{a,b}]=true;
   }
   cout<<mp.size()<<endl;

//    for(auto value:mp)
//    {
//       pair<string,string> s=value.first;
//       int ok=value.second;
//       cout<<s.first<<" "<<s.second<<" "<<ok<<'\n';
//    }
    
     
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   string s;
   cin>>s;
//    cout<<s.length()<<endl;
   map<char,int>mp;
   for(char c:s)
   {
    mp[c]=1;
      
   }

//    for(auto it:mp)
//    {
//     cout<<it.first<<" "<<it.second<<endl;

//    }
//    cout<<mp['a']<<endl;
   int ans=-1;
   for (int i = 0; i <26; i++)
   {
      int v='a'+i;
      if(mp[v]!=1)
      {
        ans=i;
        break;
      }

   }
//    cout<<ans<<endl;

    if(ans==-1)
    {
        cout<<"None\n";
    }else{


   char result=ans+'a';
   cout<<result;
    }
   
//    cout<<mp.size();

     
     
    return 0;
}
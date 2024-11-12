#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int q;
   cin>>q;
   set<pair<int,int>>s;
   multiset<pair<int,int>>ml;
   int customerPos=1;
   vector<int>ans;
   while (q--)
   {
     int type;
     cin>>type;
     if(type==1)
     {
        int money;
        cin>>money;
        s.insert({customerPos,money});
        ml.insert({money,-customerPos});
        customerPos++;
     }else if(type==2)
     {
        int pos=s.begin()->first;
        int money=s.begin()->second;
        ans.push_back(pos);
        s.erase(s.begin());
        ml.erase({money,-pos});
        
     }else{
        int pos=-ml.rbegin()->second;
        int money=ml.rbegin()->first;
        ans.push_back(pos);
        ml.erase(--ml.end());
        s.erase({pos,money});
     }
   }
    
     for(int v:ans)
     {
        cout<<v<<" ";
     }
     
    return 0;
}
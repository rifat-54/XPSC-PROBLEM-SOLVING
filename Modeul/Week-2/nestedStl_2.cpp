#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   map<int,set<int>>mp;

   set<int>s1;
   s1.insert(3); 
   s1.insert(5); 
   s1.insert(2); 

   set<int>s2;
   s2.insert(9); 
   s2.insert(6); 
   s2.insert(4);

   set<int>s3;
   s3.insert(7); 
   s3.insert(5); 
   s3.insert(8); 
   s3.insert(2); 

   mp[5]=s1;
   mp[7]=s2;
   mp[3]=s3;

   for(auto [x,y]:mp)
   {
     cout<<x<<"-> ";
     for(int val:y){
        cout<<val<<" ";
     }
     cout<<'\n';
   }

   int x=6,y=8;
   auto it=mp.lower_bound(x);
   
   if(it!=mp.end())
   {
   int ans=it->first;
   cout<<ans<<'\n';
   auto value=mp[ans].lower_bound(y);
   if(value!=mp[ans].end())
   {

   cout<<*value<<'\n';
   }else{
    cout<<"second value not found\n";
   }

   }else{
    cout<<"not found\n";
   }
     
     
    return 0;
}
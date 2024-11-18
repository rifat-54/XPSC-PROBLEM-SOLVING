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
     int a,b;
     cin>>a>>b;
     int ans=0;
     if(a<3){
        ans=a;
     }else if(b<3){
        ans=b;
     }else if(a>b){
        int mod=a%3;
        ans=mod;
     }else{
        int mod=b%3;
        ans=mod;
     }
     
     cout<<ans<<'\n';
   }

     
     
    return 0;
}
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
     int mod;
     if(a%2==1){
         mod=(a/2)+1;
         if(mod==b || mod-1==b){
            cout<<"YES\n";
         }else{
            cout<<"NO\n";
         }
     }else{
        mod=a/2;
        if(mod==b){
            cout<<"YES\n";
         }else{
            cout<<"NO\n";
         }
     }

 
   }
    
     
     
    return 0;
}
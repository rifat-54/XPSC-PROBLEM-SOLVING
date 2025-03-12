#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b,c;
   cin>>a>>b>>c;
   bool ans=true;
   if(a+b<=c) ans=false; 
   if(b+c<=a) ans=false; 
   if(a+c<=b) ans=false; 

   if(ans) cout<<"Yes\n";
   else cout<<"No\n";
     
     
    return 0;
}
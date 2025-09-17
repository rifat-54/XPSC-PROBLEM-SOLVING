#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b;
   cin>>a>>b;
   int ans=0;
   if(a>b){
    ans=(a-1)*b;
   } else{
    ans=(b-1)*a;
   }

   cout<<ans<<"\n";
     
     
    return 0;
}
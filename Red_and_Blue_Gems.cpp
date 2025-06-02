#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int e=a*c;
   int f=b*d;
   int ans=max(e,f);
   cout<<ans<<"\n"; 
     
     
    return 0;
}
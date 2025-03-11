#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b;
   cin>>a>>b;
   int ans=a+(b*10) ;
   if(ans>=100) cout<<"Yes\n";
   else cout<<"No\n";
     
     
    return 0;
}
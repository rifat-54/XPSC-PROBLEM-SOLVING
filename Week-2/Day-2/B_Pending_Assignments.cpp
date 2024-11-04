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
    int a,b,z;
    cin>>a>>b>>z;
    int total=a*b;
    
    if((a*b)<=(z*24*60)) cout<<"YES\n";
    else cout<<"NO\n";
   }
    
     
     
    return 0;
}
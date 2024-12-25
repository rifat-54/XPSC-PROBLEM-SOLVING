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
    int a,b,c;
    cin>>a>>b>>c;
    int total=2*(a*b+b*c+c*a);
    int ans=1000/total;
    cout<<ans<<'\n';
   }
    
     
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
     cin>>n;
     vector<int>v(n);
     for (int i = 0; i < n; i++)
     {
        cin>>v[i];
     }

     bool ok=true;
     for (int i = 0; i < n; i++)
     {
         if((i+1)!=v[i]){
            int x=__builtin_popcount((i+1));
            int y=__builtin_popcount(v[i]);
            if(x!=y){
               ok=false;
               cout<<"No\n";
               return;
            }
         }
     }
     
     cout<<"Yes\n";
    
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while (t--)
   {
    solve();
   }
    
     
     
    return 0;
}
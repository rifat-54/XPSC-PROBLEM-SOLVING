#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
   
    int ans=1;
    int mx=0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        if(x>mx){
            ans=i;
            mx=x;
        }
    }
    cout<<ans<<"\n";
    
   } 
     
     
    return 0;
}
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
    int n,k;
    cin>>n>>k;
    int div=k/10;
    int mod=k%10;
   
    if(k<=n*12 && k>=n*10 ) 
    {
        if(mod<=div*2)
        {
            cout<<"YES\n";
        } else
        {
            cout<<"NO\n";
        } 
    }else
    {
            cout<<"NO\n";
    }
      
    
     
   }
    
     
     
    return 0;
}
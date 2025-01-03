#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int power(int x,int n){
    int ans=1;
    while (n)
    {
        if(n&1){
           ans=(1LL* ans%mod*x%mod)%mod;
        }
    n>>=1;
    x=1LL* x*x%mod;
    }
    return ans;

    
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while (t--)
   {
    int n,x;
    cin>>x>>n;
    cout<<power(x,n)<<'\n';

   }
    
     
     
    return 0;
}
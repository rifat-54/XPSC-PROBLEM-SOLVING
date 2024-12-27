#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   long long t;
   cin>>t;
   while (t--)
   {
    long long m,a,b,c;
    cin>>m>>a>>b>>c;
    long long ans=0;
    long long loading=0;

    if(m>=a){
        ans+=a;
        loading=loading+(m-a);
    }else{
        ans+=m;
    }
    if(m>=b){
        ans+=b;
        loading=loading+(m-b);
    }else{
        ans+=m;
    }

    if(loading>=c){
        ans+=c;
    }else{
        ans+=loading;
    }

    cout<<ans<<'\n';

   }
    
     
     
    return 0;
}
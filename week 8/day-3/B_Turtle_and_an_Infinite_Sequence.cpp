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
    long long n,s;
    cin>>n>>s;

    

    if(s==0){
        cout<<n<<'\n';
    }else{
        long long ans=n|((1LL<<(s+1))-1);
        cout<<ans<<'\n';
    }

     
    
    

   }
    
     
     
    return 0;
}
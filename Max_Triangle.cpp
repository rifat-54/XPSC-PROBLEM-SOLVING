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
    if(n<4){
        cout<<-1<<"\n";
    }else{
        long long ans=n+n-1+n-2;
        cout<<ans<<"\n";
    }
   } 
     
     
    return 0;
}
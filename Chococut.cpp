#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int suma=c/a;
    int sumb=c/b;

    int ans=a*b;
    if(c%a!=0 && c%b!=0){
        int ansa=a*(suma+1);
        int ansb=b*(sumb+1);
        if(ansa<=ansb){
            ans=a*(b-suma-1);
        }else{
            ans=b*(a-sumb-1);
        }
    }else if(c%b==0){
        ans=b*(a-sumb);
    }else{
        ans=a*(b-suma);
    }

    // cout<<suma<<" "<<sumb<<"\n";
    cout<<ans<<"\n";
   } 
     
     
    return 0;
}
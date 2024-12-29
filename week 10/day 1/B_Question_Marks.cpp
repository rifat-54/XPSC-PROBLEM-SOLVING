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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int a=n,b=n,e=n,d=n;
    for(char c:s){
        if(c=='A' && a>0){
            
            ans++;
            a--;
        }
        if(c=='B' && b>0){
            
            ans++;
            b--;
        }
        if(c=='C' && e>0){
            
            ans++;
            e--;
        }
        if(c=='D' && d>0){
            
            ans++;
            d--;
        }
    }
    cout<<ans<<'\n';
   }
    
     
     
    return 0;
}
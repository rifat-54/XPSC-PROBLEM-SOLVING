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
    int m,k;
    cin>>m>>k;
    int ctn=0;
    string s;
    cin>>s;
    for (int i = 0; i < m; i++)
    {
        if(s[i]=='S'){
            ctn++;
        }
    }

    if(ctn>=k){
        cout<<m<<'\n';
    }else{
        
        int d=k-ctn;
        int ans=m+d-1;
        cout<<ans<<'\n';

    }
    
   }
    
     
     
    return 0;
}
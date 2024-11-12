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
     string s,r;
     cin>>s>>r;
     int ss=0;
     int rr=0;
     for (int i = 0; i < n; i++)
     {
        if(s[i]=='R' && r[i]=='S')
        {
            ss++;
        }else if(s[i]=='S' && r[i]=='P')
        {
            ss++;
        }else if(s[i]=='P' && r[i]=='R')
        {
            ss++;
        }else if(s[i]=='S' && r[i]=='R')
        {
            rr++;
        }else if(s[i]=='P' && r[i]=='S')
        {
            rr++;
        }else if(s[i]=='R' && r[i]=='P')
        {
            rr++;
        }
        
     }

     if(ss>>rr){
        cout<<0<<endl;
     }else if(ss==rr){
        cout<<0<<endl;
     }else{
        int ans=rr-ss;
            cout<<ans<<endl;
        }
     
   }
    
     
     
    return 0;
}
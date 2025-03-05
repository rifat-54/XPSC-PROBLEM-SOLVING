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
    int x,y,z,a,b,c,l,ll,yy;
    cin>>x>>y>>z>>a>>b>>c;
    int ans=0;
    if(x>=a){
        ans=ans+a;
        x=x-a;
    }else{
        ans=ans+x;  //1
        // cout<<ans<<'\n';
         l=a-x;
        if(y>=l){
            ans=ans+l;  
            y=y-l;
        }else{
            ans=ans+y;  //1+2
            // cout<<ans<<'\n';
         ll=l-y;
            y=0;
        //  cout<<"l-> "<<ll<<'\n';
         if(z>=ll){
                ans=ans+ll;
                // cout<<ans<<'\n';
                z=z-ll;
            }else{
                ans=ans+z;
                // cout<<ans<<'\n';
                z=0;
            }
        }
        
    }
    if(y>=b){
        ans=ans+b;
        
    }else{
        ans=ans+(y);
       yy=b-y;
        y=0;
       if(z>=yy){
        ans=ans+(yy);
        z=z-yy;
       }else{
        ans=ans+(z);
        z=0;
       }
    }

    if(z>=c){
        ans=ans+(c);
    }else{
        ans=ans+(z);
    }
    cout<<ans<<'\n';
   }
    
     
     
    return 0;
}
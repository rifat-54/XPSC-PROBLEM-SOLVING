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
    vector<int>v(n);
    int mx=INT_MIN;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]>mx){
            mx=v[i];
            k=i;
        }
    }

    int ans=0;
    for (int  i = 0; i < n; i++)
    {
        int val=v[i];
        if(i==1){
            val-=v[0];
        }
        if(i==n-2){
             val-=v[n-1];
        }
        // cout<<i<<"-> "<<val<<"  ";
        ans=max(ans,val);
        // cout<<"ans ->"<<ans<<"\n";
    }
    

    // cout<<mx<<" "<<k<<"\n";
    // int ans=0;
    // if(n==3 && k==1){
    //     int a=(v[1]-v[0]);
    //     int ansa=abs(a-v[2]);
    //     int ansb=v[2];
    //     int b=(v[1]-v[2]);
    //     int ansc=abs(b-v[0]);
    //     int ansd=v[0];
    //     ans=max({ansa,ansb,ansc,ansd});
        

    // }else if(n==2){
    //     ans=abs(v[0]-v[1]);
    // }else{
    //     if(k=1){
    //         ans=mx-v[0];
    //     }else if(k==n-2){
    //         ans=mx-v[n-1];
    //     }else{
    //         ans=mx;
    //     }
    // }

    cout<<ans<<"\n";
    
   } 
     
     
    return 0;
}
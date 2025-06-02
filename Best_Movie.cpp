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
    int ans=INT_MAX;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>=7){
            flag=true;
            ans=min(ans,b);
        }
    }

    if(flag){
        cout<<ans<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    

   } 
     
     
    return 0;
}
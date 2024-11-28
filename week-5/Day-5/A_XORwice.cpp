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
    long long a,b;
    cin>>a>>b;
    long long ans=LLONG_MAX;
    int minn=min(a,b);
    
        for (int i =1; i <=minn ; i++)
        {
            long long current=(a^i) + (b^i);
            ans=min(ans,current);
        }
        
    

    cout<<ans<<'\n';
   }
    
     
     
    return 0;
}
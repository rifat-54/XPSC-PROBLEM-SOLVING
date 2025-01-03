#include<bits/stdc++.h>
using namespace std;
const int Mod=1e9+7;

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
        int ans=1;
        for (int i = 2; i <=n; i++)
        {
            ans=(1LL * ans%Mod * i%Mod)%Mod;
        }

        cout<<ans<<'\n';
        

    }
    
     
     
    return 0;
}
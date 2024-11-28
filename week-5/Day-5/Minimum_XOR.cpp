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
    int XOR=0;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        XOR^=v[i];
    }

    int ans=XOR;

    for (int i = 0; i < n; i++)
    {
        int current=XOR^v[i];
        ans=min(ans,current);
    }

    cout<<ans<<'\n';
    
    


   }
    
     
     
    return 0;
}
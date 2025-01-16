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
    int n,q;
    cin>>n>>q;
    vector<int>v(n),pre(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.rbegin(),v.rend());
    
    

    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+v[i-1];
        pre[i]=sum;
    }

    

    for (int i = 0; i < q; i++)
    {
        int ans=-1;
        int k;
        cin>>k;
        auto it=lower_bound(pre.begin(),pre.end(),k);

        if(it!=pre.end()){
            ans=it-pre.begin();
        }

        cout<<ans<<'\n';

    }
    
        
    
   }
    
     
     
    return 0;
}
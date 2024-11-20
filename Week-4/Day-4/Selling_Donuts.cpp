#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int,int>mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin>>x;
            mp[i]=x;
        }

        int ans=0;
        for (int i = 1; i <= m; i++)
        {
            int x;
            cin>>x;
            if(mp[x]==0){
                ans++;
            }else{
                mp[x]=mp[x]-1;
            }
        }

        cout<<ans<<endl;
        
        
    }

    return 0;
}
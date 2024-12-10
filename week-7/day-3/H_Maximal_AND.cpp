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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> bits(31);
        for (int i = 0; i < n; i++)
        {
            for (int j = 30; j >= 0; j--)
            {
                if ((v[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
            
        }
        int ans=0;
        for (int i = 30; i >=0; i--)
        {
            if(bits[i]==n){
                ans+=(1LL<<i);
            }else{
                int need=n-bits[i];
                if(need<=k){
                    ans+=(1LL<<i);
                    k-=need;
                }
            }
            
        }

        cout<<ans<<'\n';
        
    }

    return 0;
}
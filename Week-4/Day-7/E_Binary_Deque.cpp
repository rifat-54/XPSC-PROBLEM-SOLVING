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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0, r = 0, ans = 0, ctn = 0;
        while (r < n)
        {
            ctn += v[r];
            if (ctn == s)
            {
                ans = max(ans, r - l + 1);
            }
            if (ctn > s)
            {
                while (l < r && ctn > s)
                {
                    ctn -= v[l];
                    l++;
                }
                if (ctn == s)
                {
                    ans = max(ans, r - l + 1);
                }
            }
            r++;
        }
        if(ctn<s) cout<<-1<<'\n';
        else{

        int ans1=n-ans;
        cout<<ans1<<'\n';
        }
    }

    return 0;
}
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
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, v[i]);
        }

        long long ans = 0;
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % g1 == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            ans = g1;
        }
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % g2 == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans = g2;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
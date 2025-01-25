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
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {

            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        int ans = 0;
        for (int i = 1; i < k; i++)
        {

            if (v[i] == 1)
            {
                ans++;
            }
            else
            {
                int need = v[i] * 2;
                ans = ans + need - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
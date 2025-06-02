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
        string s;
        cin >> s;

        int ctn = 0;
        for (int j = 0; j < k && ctn < k; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (ctn < k)
                {
                    if (s[i] == '0' && s[i + 1] == '1')
                    {
                        s[i] = '1';
                        ctn++;
                    }
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
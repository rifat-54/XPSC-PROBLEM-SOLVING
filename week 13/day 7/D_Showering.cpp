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

        int n, s, m;
        cin >> n >> s >> m;

        bool ans = false;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            if ((x - a) >= s)
            {
                ans = true;
            }

            a = y;
        }
        if ((m - a) >= s)
        {
            ans = true;
        }

        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
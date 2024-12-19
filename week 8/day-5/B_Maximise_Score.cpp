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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int fin;
            if (i == 0)
            {
                fin = abs(v[i] - v[i + 1]);
            }
            else if (i == n - 1)
            {
                fin = abs(v[i] - v[i - 1]);
            }
            else
            {
                int scorea = abs(v[i] - v[i - 1]);
                int scoreb = abs(v[i] - v[i + 1]);
                fin = max(scorea, scoreb);
            }

            if (fin < ans)
            {
                ans = fin;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
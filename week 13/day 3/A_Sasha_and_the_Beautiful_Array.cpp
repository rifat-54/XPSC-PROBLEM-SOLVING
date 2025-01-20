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

        int mx = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int ctn = abs(v[i] - v[j]);
                // cout << ctn << " ";
                mx = max(mx, ctn);
            }
        }

        cout << mx << '\n';
    }

    return 0;
}
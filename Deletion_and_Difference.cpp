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

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            mp[x]++;
        }

        int z = mp[0];

        int ctn = 0;

        for (auto [f, s] : mp)
        {

            if (f != 0)
                ctn += (s % 2);
            if (s > 1)
                z++;
        }

        if (z)
        {
            ctn++;
        }
        cout << ctn << "\n";
    }

    return 0;
}
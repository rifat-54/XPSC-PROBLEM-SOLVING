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

        int ans = -1;
        for (int j = 0; j < 257; j++)
        {
            int XOR = 0;
            for (int i = 0; i < n; i++)
            {
                int current = j ^ v[i];
                XOR ^=current;
            }
            if (XOR == 0)
            {
                ans = j;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
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
        int ctna = 0;
        int ctnb = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 0)
            {
                ctna = ctna + x;
            }
            else
            {
                ctnb = ctnb + x;
            }
        }

        cout << max(ctna, ctnb) << "\n";
    }

    return 0;
}
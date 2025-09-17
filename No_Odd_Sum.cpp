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
        int ctna = 0, ctnb = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                ctna++;
            }
            else
            {
                ctnb++;
            }
        }
        if (ctna == n || ctnb == n)
            cout << 0 << "\n";
        else
        {
            if (ctnb % 2)
            {
                int aa = (ctnb / 2)+1;
                int ans = min(aa, ctna);
                cout << ctna << "\n";
            }
            else
            {
                int aa = (ctnb / 2);
                int ans = min(aa, ctna);
                cout << ans << "\n";
            }
        }
    }

    return 0;
}
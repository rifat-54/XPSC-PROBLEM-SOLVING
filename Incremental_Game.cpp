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
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, b);
        int mn = min(a, b);
        int need = 0;
        bool alice = true;
        int i = 0;
        while (1)
        {
            if (i % 2 == 0)
            {
                if (mx <= c)
                {
                    break;
                }
                mx = mx - c;
                need = c;
            }
            else
            {
                if (mx > need || mn > need)
                {
                    alice = false;
                }
            }
            i++;
        }
        if (alice)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }

    return 0;
}
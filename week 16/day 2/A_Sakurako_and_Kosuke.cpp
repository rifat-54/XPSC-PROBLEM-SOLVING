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
        int ans = 0;
        int i = 1;
        int x = 0;

        int j = 0;
        while (1)
        {
            j++;
            if (abs(x) > n)
                break;
            ans++;

            if (j % 2 == 0)
            {
                x = x + i;
            }
            else
            {
                x = x - (i);
            }

            i = i + 2;
        }

        if (ans % 2 != 0)
            cout << "Sakurako\n";
        else
            cout << "Kosuke\n";
    }

    return 0;
}
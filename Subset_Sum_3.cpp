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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 3 == 0)
                a++;
            else if (x % 3 == 1)
                b++;
            else
                c++;
        }

        if (a > 0 || b >= 3 || c >= 3 || (b > 0 && c > 0))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
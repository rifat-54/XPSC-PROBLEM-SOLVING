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
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        int value = m - n * b;
        int dif = a - b;
        bool ok = false;

        
        if (dif == 0 && m == a * n)
        {

            ok = true;
        }
        else if (value % dif == 0)
        {
            long long bag = value / dif;
            if (bag >= 0 && bag <= n)
            {
                ok = true;
            }
        }

        if (ok)
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
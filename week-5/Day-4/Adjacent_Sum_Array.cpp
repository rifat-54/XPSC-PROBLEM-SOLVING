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
        int a[n];
        a[0] = 2;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = abs(x - a[i-1]);
        }

        for (int v : a)
        {
            cout << v << " ";
        }
        cout << '\n';
    }

    return 0;
}
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

        sort(v.begin(), v.end());

        int mx = 0;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx)
            {
                mx++;
            }
            else if (v[i] < mx)
            {
                b.push_back(v[i]);
            }
            else
            {
                b.push_back(v[i]);
            }
        }

        sort(b.begin(), b.end());

        int mxb = 0;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == mxb)
            {
                mxb++;
            }
        }

        int total = mx + mxb;
        cout << total << '\n';
    }

    return 0;
}
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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int mx = INT_MAX;
        int ctn,need;
        for (int i = 0; i < n; i++)
        {
            ctn = 0;
            for (int j = 0; j < m; j++)
            {
                if ( (i+j)<n && a[j + i] == b[i])
                {
                    ctn++;
                }
            }
            need=m-ctn;
            mx=min(mx,need);
        }

        cout<<mx<<'\n';
    }

    return 0;
}
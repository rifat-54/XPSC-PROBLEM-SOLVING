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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            for (int j = 0; j < n - 1; j++)
            {
                int aa = abs(b[j] - a[i]);
                int bb = abs(b[j + 1] - a[i]);
                if (aa < bb)
                {
                    ans = i + 1;
                }
                else if (aa == bb)
                {
                    if (b[j] < b[j + 1])
                    {
                        ans = i + 1;
                    }
                    else
                    {
                        flag = false;
                        ans = -1;
                        break;
                    }
                }
                else
                {
                    flag = false;
                    ans = -1;
                    break;
                }
            }
            if(flag) break;
        }

        cout << ans << "\n";
    }

    return 0;
}
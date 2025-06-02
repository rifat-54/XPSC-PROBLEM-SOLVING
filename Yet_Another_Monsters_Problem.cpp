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

        int ans = n;
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            int b =v.end()-upper_bound(v.begin(),v.end(),x);
            

            int total = x + b;
            ans = min(ans, total);
        }

        cout << ans << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long k;
    cin >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long l = 0, r = 0, ans = 0;
    multiset<long long> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        long long min, max;
        min = *ml.begin();
        max = *ml.rbegin();
        if (max - min <= k)
        {
            ans += (r - l + 1);
        }
        else
        {

            while (l < r)
            {
                min = *ml.begin();
                max = *ml.rbegin();
                if (max - min <= k)
                {
                    break;
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            min = *ml.begin();
            max = *ml.rbegin();
            if(max-min<=k)
            ans += (r - l + 1);
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}
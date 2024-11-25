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
        int n, k;
        cin >> n >> k;
        string ss, kk;
        cin >> ss >> kk;
        int l = 0, r = 0;
        int sum = 0;
        int ctn = 0;
        while (r < n)
        {
            if (ctn < k)
            {
                int string = ss[r];
                int key = kk[ctn];
                int type1 = abs(key - string);
                int type2 = abs(key + 10 - string);
                int ans = min(type1, type2);
                sum += ans;
                ctn++;
                r++;
            }else{
                l++;
            }
        }
    }

    return 0;
}
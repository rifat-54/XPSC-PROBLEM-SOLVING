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
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            a[i] = sum;
        }
        
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        long long ans = 0;
        while (l < r)
        {
            if (s[l] == 'L' && s[r] == 'R')
            {
                if (l == 0)
                {
                    ans += a[r];
                }else{
                    ans += a[r] - a[l - 1];
                }
                l++, r--;
            }
            else if (s[l] == 'R')
            {
                l++;
            }
            else if(s[r]=='L')
            {
                r--;
            }else if(s[l] == 'R' && s[r] == 'L'){
                l++;
                r--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
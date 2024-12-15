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
        vector<int> v(n + 1);
        bool flag = false;

        int odd_sum = 0;
        int even_sum = 0;
        int even = n/2;
        int odd = n-n/2;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] & 1)
            {
                odd_sum += v[i];
                // odd += 1;
            }
            else
            {
                even_sum += v[i];
                // even += 1;
            }
        }

        // cout<<odd_sum<<" "<<even_sum<<" "<<odd<<" "<<even<<'\n';
        if (odd == 0 || even == 0)
        {
            flag = false;
        }
        else
        {
            float odd_avg = odd_sum / odd;
            float even_avg = even_sum / even;
            if (odd_sum == 0 || even_sum == 0)
            {
                flag = false;
            }
            else if (odd_sum % odd != 0 || even_sum % even != 0)
            {
                flag = false;
            }

            else if (odd_avg == even_avg)
            {
                flag = true;
            }else{
                flag=false;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
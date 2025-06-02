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
        int n, k, d;
        cin >> n >> k >> d;
        int m = n;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<int> c(m);

        for (int i = 0; i < m; i++)
        {
            c[i] = v[i];
        }

        int ctn = 0;
        // int mn=v[0];

        // for (int i = 0; i < m; i++)
        // {
        //     cout << v[i] << " ";
        // }

        // v[0]=v[0]-1;
        int j = 0;
        while (n >= k && j < d)
        {
            j++;
            // cout<<"conn\n";

            int in = 0;
            int mn = INT_MAX;
            n--;
            ctn++;
            for (int i = 0; i < m; i++)
            {
                if (v[i] < mn)
                {
                    mn = v[i];
                    in = i;
                }
            }

            v[in] = v[in] - 1;

            // cout<<"in-> "<<in<<" "<<v[in]<<"\n";
            for (int i = 0; i < m; i++)
            {
                // cout<<v[i]<<" ";
                if (i == in)
                {
                    // cout<<"enter1\n";
                    continue;
                }
                // cout<<v[i]<<" ";
                if (v[i] == 0)
                {
                    // cout<<"enter2\n";
                    n++;
                    v[i] = c[i];
                }
                else if (v[i] < c[i] && i != in)
                {
                    // cout<<"enter3\n";
                    v[i] = v[i] - 1;
                }
                // cout<<v[i]<<"\n";
                // cout<<"enter4\n";
            }

            // for (int i = 0; i < m; i++)
            // {
            //     cout << v[i] << " ";
            // }

            // cout << "\n";
        }

        cout << ctn << "\n";
    }

    return 0;
}
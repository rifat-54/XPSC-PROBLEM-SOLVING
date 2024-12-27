#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ctnz = 0;
        int ctnOne = 0;
        for (char c : s)
        {

            if (c == '0')
            {
                ctnz++;
            }
            else
            {
                ctnOne++;
            }
        }

        int dif = ctnOne - ctnz;
        if (dif == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            if (dif > 1)
            {
                cout << "NO\n";
            }
            else
            {
                if (ctnz < ctnOne)
                {
                    if (s[0] == '1')
                    {
                        cout << "Yes\n";
                    }
                    else
                    {
                        cout << "No\n";
                    }
                }
                else
                {
                    if (s[0] == '0')
                    {
                        cout << "Yes\n";
                    }
                    else
                    {
                        cout << "No\n";
                    }
                }
            }
        }
    }

    return 0;
}
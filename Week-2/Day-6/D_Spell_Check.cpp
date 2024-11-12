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
        string s;
        cin >> s;
        
        int a = 0, b = 0, f = 0, d = 0, e = 0;

        for (char c : s)
        {
            if (c == 'T')
            {
                a++;
            }
            else if (c == 'i')
            {
                b++;
            }
            else if (c == 'm')
            {
                f++;
            }
            else if (c == 'u')
            {
                d++;
            }
            else if (c == 'r')
            {
                e++;
            }
        }
        if (a == 1 && b == 1 && f == 1 && d == 1 && e == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
        return 0;
}
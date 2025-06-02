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
        string s, t;
        cin >> s >> t;
        int ctn = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (t[i] != s[i])
            {
                if (s[i] != '1')
                {
                    ok = false;
                    break;
                }
                ctn++;
            }
        }

        if (!ok)
        {
            cout << "No\n";
        }
        else
        {
            if(ctn==0){
                cout << "Yes\n";
            }
            else if (ctn % 2 == 0 )
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}
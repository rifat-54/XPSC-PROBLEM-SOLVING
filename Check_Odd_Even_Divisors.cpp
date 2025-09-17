#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int odd = 0;
    int evn = 0;
    int n = 1000000000;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int podd = odd;
        int pevn = evn;

        for (int j = i - 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                if (j % 2 == 0)
                {
                    evn = pevn + 1;
                }
                else
                {
                    odd = podd + 1;
                }

                mp[odd] = evn;
            }
        }
    }
    
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if(mp[a]==b) cout<<"Yes\n";
        else cout<<"No\n";
      

        return 0;
    }
}
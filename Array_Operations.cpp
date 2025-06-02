#include <bits/stdc++.h>
#define ll long long
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
        deque<ll> q;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            q.push_back(x);
        }

        ll mx = 0;
        if (q.size() == 1)
        {
            mx = q.front();
        }
        

        while (q.size() > 2)
        {

            ll a = q.front();
            q.pop_front();
            ll b = q.front();
            q.pop_front();
            ll c = q.front();
            q.pop_front();

            
            ll e = max({a+1,b,c+1});
            mx=max(mx,e);
            q.push_front(e);
        }

        cout << mx << "\n";
    }

    return 0;
}
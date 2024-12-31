#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll lcd = (a / (__gcd(a, b))) * b;

    ll c = n / lcd;
    
    ll ctna = (n / a);
    ll ctnb = (n / b);
    
    if ((c*p) < (c*q))
    {
        ctna -= c;
    }
    else
    {
        ctnb -= c;
    }

    ll total = (ctna * p) + (ctnb * q);
    cout << total << '\n';

    return 0;
}
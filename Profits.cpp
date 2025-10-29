#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define M 1000000007
#define N 1000000
#define endl "\n"
#define all(v) v.begin(), v.end()
#define forn for (int i = 0; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void solve()
{
    int a,b;
    cin>>a>>b;
    if(b>=a) {
        cout<<0<<"\n";
        return;
    }

    int ans=0;
    int ctn=0;
    for (int i =b+1; i <=a; i++)
    {
        ans=ans+i;
        ctn++;
    }

    int output=ans-(ctn*b);
    cout<<output<<"\n";
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
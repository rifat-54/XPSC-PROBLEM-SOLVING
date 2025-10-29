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
    int n,k;
    cin>>n>>k;
    int ans=0;
    int mid=n/2;
    if(n%2==0){
        if(k<=mid){
            ans=k;
        }else{
            ans=n-k;
        }
    }else{
        if(k<=mid){
            ans=k;
        }else{
        ans=n-k;
        }

        
    }
    cout<<ans<<endl;
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
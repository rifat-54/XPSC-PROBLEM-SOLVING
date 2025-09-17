#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define M 1000000007
#define N 1000000
#define endl "\n"
#define all(v) v.begin(), v.end()
#define forn for (int i = 0; i < n; i++)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
void solve()
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int a=0,b=0;
   for (int i = 0; i < k; i++)
   {
    if(s[i]=='1') a++;
    else b++;
   }

//    cout<<a<<" "<<b<<"\n";

   int need=n/2;

   if(n%2==1 || a>need || b>need)
   {
    no;
    return;
   }

   int exit=n-k;
   int aned=need-a;
   int bned=need-b;

   if(aned>exit || bned>exit){
       no;
       return;
    }

    yes;







   
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
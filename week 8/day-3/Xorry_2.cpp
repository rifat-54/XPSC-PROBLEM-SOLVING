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
        int maxbit = __lg(n);
        // cout<<maxbit<<'\n';
        int ctn = 1;
        bool flag=false;
        for (int i =maxbit-1; i>=0 ; i--)
        {
            // int itt=(n & (1<<i));
            // cout<<itt<<'\n';
            if ((n>>i)&1)
            {
                flag=true;
            }
            else
            {
                if(flag){

                ctn=ctn*2;
                }
                
            }
        }
        cout << ctn << '\n';
    }

    return 0;
}
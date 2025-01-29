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
        string s;
        cin >> s;
        int ctn = 0;

        if (s[0] != 'a')
        {
            ctn++;
        }
        if (s[1] != 'b')
        {
            ctn++;
        }
        if (s[2] != 'c')
        {
            ctn++;
        }

        if(ctn<3){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
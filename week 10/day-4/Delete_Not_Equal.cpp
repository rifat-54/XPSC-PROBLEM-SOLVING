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
        int ctn0 = 0, ctn1 = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                ctn0++;
            }
            else
            {
                ctn1++;
            }
        }
        if(ctn0 ==0 || ctn1==0){
            cout<<n<<'\n';
        }else{
            cout<<1<<'\n';
        }
    }

    return 0;
}
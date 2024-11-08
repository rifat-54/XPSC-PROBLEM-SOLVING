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
        cin>>n;
        int a[n];
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(i!=0)
            {
                int dif=abs(a[i]-a[i-1]);
                if(dif!=5 && dif!=7)
                {
                    flag=false;
                }
                
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
        
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    //    for (int i = 1; i <=n; i++)
    //    {
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    //    }

    //  optimize

    set<int>s;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // cout << i << " ";
            s.insert(i);
            if (n / i != i)
            {
                s.insert(n/i);
                // cout << n / i << " ";
            }
        }
    }

    for(int it:s){
        cout<<it<<" ";
    }

    return 0;
}
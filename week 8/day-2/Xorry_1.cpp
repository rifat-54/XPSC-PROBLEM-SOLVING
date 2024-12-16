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
        int a=0,b=n;
        for (int i = 0; i <=n; i++)
        {
            for (int j = 0; j <=n; j++)
            {
                int dif=abs(i-j);
                int xorr=i^j;
                if(xorr==n){
                    int ab=abs(a-b);
                  if(dif<ab){
                    a=i;
                    b=j;
                  }
                }
            }
            
        }

        cout<<a<<" "<<b<<'\n';
        

    }

    return 0;
}
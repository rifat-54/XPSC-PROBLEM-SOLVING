#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> mpa, mpb;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (mpb.find(a) != mpb.end())
        {
            string s=mpb[a];
            mpa[s]=b;
            mpb.erase(a);
            mpb[b]=s;

        }else{
            mpa[a]=b;
            mpb[b]=a;
        }
       
    }

     cout<<mpa.size()<<'\n';
        for(auto it:mpa)
        {
            cout<<it.first<<" "<<it.second<<'\n';
        }

    return 0;
}
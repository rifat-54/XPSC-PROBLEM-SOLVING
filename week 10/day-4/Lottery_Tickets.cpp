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
        set<int> s;
        int x;
        cin >> x;
        s.insert(x);
        int first = x;
        int max = x, min = x;
        for (int i = 1; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > max)
            {
                max = a;
            }
            if (a < min)
            {
                min = a;
            }

            s.insert(a);
        }

        auto it = s.find(first);

        int total = 0;

        if (first <= min)
        {
            if (it++ != s.end())
            {
                // it++;
                int cur = *it;
                int dif = (cur - first) / 2;
                total = dif;
                total++;
            }
        }
        else if (first >= max)
        {
            if(it--!=s.begin()){
                //  it--;
            int cur = *it;
            int dif = (first - cur) / 2;
            total = 1000000 - (dif + cur);
            }
           
        }
        else
        {
            if(it++!=s.end()){
                // it++;
            int cur1 = *it;
            int dif1 = (cur1 - first) / 2;
            total += dif1;
            }
            

            it--;
            // it--;
            if(it--!=s.begin()){
                int cur0 = *it;
            int dif = (first - cur0) / 2;
            total += dif;
            }
            total++;
            
        }

        cout << total << '\n';

        // for(auto it:s){
        //     cout<<it<<" ";
        // }
        // cout<<'\n';
    }

    return 0;
}
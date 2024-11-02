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
        map<string, vector<int>> mp;
        for (int i = 1; i <=3; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
            
        }

        // for(auto[x,y]:mp)
        // {
        //     cout<<x<<"-> ";
        //     for(int v:y)
        //     {
        //         cout<<v<<" ";
        //     }
        //     cout<<endl;
        // }

        vector<int>v(4);
        for(auto[x,y]:mp)
        {
            
                if(y.size()==1)
                {
                    v[y[0]]+=3;
                }else if(y.size()==2)
                {
                    v[y[0]]++;
                    v[y[1]]++;
                }
            
        }

        for (int i = 1; i <=3; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        

        
    }

    return 0;
}
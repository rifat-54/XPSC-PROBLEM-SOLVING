#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while (t--)
   {
        int n,m;
        cin>>n>>m;
        map<int,set<int>>mp;
        for (int i = 1; i <=n; i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        // for(auto[x,y]:mp)
        // {
        //     cout<<x<<"-> ";
        //     for(auto set:y)
        //     {
        //         cout<<set<<" ";
        //     }
        //     cout<<endl;
        // }

        for (int i = 0; i < m; i++)
        {
            int l,r;
            cin>>l>>r;
           
            if(mp.find(l)==mp.end() ||  mp.find(r)==mp.end())
            {
                cout<<"NO\n";
            }else{
                 int leftStation=*mp[l].begin();
                 int rightStation=*mp[r].rbegin();
                if(leftStation<rightStation)
                    {
                        cout<<"YES\n";
                    }else{
                        cout<<"NO\n";
                    }
            }
        }
        
        
   }
    
     
     
    return 0;
}
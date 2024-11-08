#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   cin>>n;
   set<int>s ;
   for (int i = 0; i < n; i++)
   {
    int x;
    cin>>x;
    s.insert(x);
   }

    // auto it=s.begin();
//     it++;
//     it++;
//     it--;
//    cout<<*it<<'\n';

// for (auto it = s.begin(); it != s.end(); it++)
// {
//     cout<<*it<<endl;
// }

    for(auto it:s)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // auto it=s.find(6);
    // if(it!=s.end()) cout<<"found\n";
    // else cout<<"not found\n";

    // cout<<s.count(6)<<'\n';
    // cout<<s.size()<<endl;
    // s.erase(4);
    // s.clear();
    //  for(auto it:s)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // cout<<s.size()<<endl;
    

    // auto it=s.lower_bound(7);
    // auto it=s.upper_bound(8);

    // if(it==s.end())
    // {
    //     cout<<"not found\n";
    // }else
    // cout<<*it<<endl;
    
     
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while(t--){
    int a,b;
    cin>>a>>b;
    set<int>s;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    int ans=b-s.size();

    cout<<ans<<'\n';
    
   } 
     
     
    return 0;
}
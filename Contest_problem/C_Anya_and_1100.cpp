#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
        string s;
   while (t--)
   {
        cin>>s;
        int q;
        cin>>q;
        for (int i = 0; i < q; i++)
        {
            int a,b;
            cin>>a>>b;
            s[a]=b;
           if(s.find("1100")<s.length())
           {
            cout<<"YES\n";
           }else{
            cout<<"NO\n";
           }
        }
        s.clear();
        
   }
    
     
     
    return 0;
}
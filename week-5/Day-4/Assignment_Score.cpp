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
     int n;
     cin>>n;
     int markNeed=(n+1)*.5*100;
     int total=0;
     for (int i = 0; i < n; i++)
     {
        int x;
        cin>>x;
        total+=x;
     }

     int mark=markNeed-total;
     if(mark>100) cout<<-1<<'\n';
     else if(total>markNeed) cout<<0<<'\n';
     else cout<<mark<<'\n';
     
   }
    
     
     
    return 0;
}
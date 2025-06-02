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
    double h;
    cin>>n>>h;
    double mx=-1;
    
    for (int i = 0; i < n; i++)
    {
        double a,b;
        cin>>a>>b;
        double c=b/a;
       
        mx=max(mx,c);
    }

    

    int ans=ceil(h/mx);
    cout<<ans<<"\n";
    
   }
    
     
     
    return 0;
}
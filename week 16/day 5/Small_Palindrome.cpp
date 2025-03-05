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
    int a,b;
    cin>>a>>b;
    
    int n=a/2;

    for (int i = 0; i < n; i++)
    {
        cout<<1;
    }

    for (int i = 0; i < b; i++)
    {
        cout<<2;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<1;
    }

    cout<<'\n';
    
   }
    
     
     
    return 0;
}
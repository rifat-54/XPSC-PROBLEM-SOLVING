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
   vector<int>v(n);
    
    for (int i = 0; i < n; i++)
    {
        
        cin>>v[i];
        
    }

   sort(v.begin(),v.end());
   int t=n/2;
   cout<<v[t]<<'\n';

    

     
    

   
    
    
   }
    
     
     
    return 0;
}
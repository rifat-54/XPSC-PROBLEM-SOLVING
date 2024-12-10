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
      int n,k;
      cin>>n>>k;
      vector<int>v(n);
      for (int i = 0; i < n; i++)
      {
        cin>>v[i];
      }

      for (int i = 0; i < n; i++)
      {
         for (int j =1;j>=0; j--)
         {
            if((v[i]>>j)&1){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
         }
         cout<<'\n';
         
      }
      
      
   }
    
     
     
    return 0;
}
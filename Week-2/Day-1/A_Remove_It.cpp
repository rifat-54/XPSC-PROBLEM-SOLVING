#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   long long int n,t;
   cin>>n>>t;
   list<long long int>v;
   for (int i = 0; i < n; i++)
   {
     long long int x;
     cin>>x;
     v.push_back(x);
   }
   
    v.remove(t);

   for(int val:v)
   {
    cout<<val<<" ";
   }
    
     
     
    return 0;
}
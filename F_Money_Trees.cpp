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
     vector<long long >f(n);
     vector<long long >h(n);
     int l=0,r=0;
     long long sum=0;
     while (r<n-1)
     {
        if(h[r]%h[r+1]==0){
            sum+=f[r];
        }
     }
     
   }
    
     
     
    return 0;
}
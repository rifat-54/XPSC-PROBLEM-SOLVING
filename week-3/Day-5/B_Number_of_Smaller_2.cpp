#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   for (int i = 0; i < m; i++)
   {
    cin>>b[i];
   }
    int r=0,l=0,ctn=0;
   while (r<m)
   {
      if(l<n && a[l]<b[r])
      {
        l++;
        ctn++;
      }else{
        r++;
        cout<<ctn<<" ";
      }
   }
   
    
     
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n,m;
   cin>>n>>m;
   vector<int> a(n),b(m);

   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   for (int i = 0; i < m; i++)
   {
    cin>>b[i];
   }

   int l=0,r=0,sum=0;
   int ctn=0;
   int c[n];
   memset(c,sizeof(c),-1);
   while (r<m)
   {
       if(l<n && a[l]<=b[r])
       {
          if(a[l]==b[r]){
            ctn++;
          }
          l++;
       }else{
        if(c[b[r]]!=-1) ctn=c[b[r]];
        sum+=ctn;
        c[b[r]]=ctn;
        r++;
        ctn=0;
       }
   }

   cout<<sum;
   
    
     
     
    return 0;
}
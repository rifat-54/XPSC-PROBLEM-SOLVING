#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n,m;
   cin>>n>>m;
   vector<int> a(n),b(m);
    int c[n];
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
    c[i]=-1;
   }
   for (int i = 0; i < m; i++)
   {
    cin>>b[i];
   }

   int l=0,r=0;
   long long int sum=0;
   
   
   
   
   while (r<m && l<n)
   {
      int ctn1=0,ctn2=0;
      int current=a[l];
      while (l<n && a[l]==current)
      {
        ctn1++;
        l++;
      }

      while (r<m && current>b[r])
      {
        r++;
      }
      

      while (r<m && b[r]==current)
      {
          ctn2++;
          r++;
      }

      sum+=(1LL*ctn1*ctn2);
      
      
   }

   cout<<sum<<'\n';
   
    
     
     
    return 0;
}
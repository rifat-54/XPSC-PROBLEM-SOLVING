#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }

   for (int i = 0; i < k; i++)
   {
     int key;
     cin>>key;
     if(key>a[n-1]){
        cout<<n+1<<'\n';
     }else{

    
     int l=0,r=n-1,ans=INT_MAX,mid;
     while (l<=r)
     {
        mid=(l+r)/2;
        if(key<=a[mid]){
            ans=min(ans,mid);
            r=mid-1;
            // cout<<"enter\n";
        }else{
            l=mid+1;
        }
     }

     cout<<ans+1<<'\n';

      }
     
   }
   
    
     
     
    return 0;
}
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
    long long n,k;
    cin>>n>>k;
    long long mn=LLONG_MAX;
    long long mx=LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin>>x;
        mn=min(mn,x);
        mx=max(mx,x);
    }

    long long totalneed=mn+(k*(n-1));
    if(mx>=totalneed){
        cout<<mx<<'\n';
    }else{
        cout<<totalneed<<'\n';
    }

   
    
   }
    
     
     
    return 0;
}
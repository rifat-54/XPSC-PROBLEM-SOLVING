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
    // int a[n+1];
    int sum=0;
    int ctn=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        // a[i]=x;
        sum=sum+x;
        if(x<0) ctn++;

    }
    if(sum<0) cout<<0<<'\n';
    else cout<<ctn<<'\n';
    
   }
    
     
     
    return 0;
}
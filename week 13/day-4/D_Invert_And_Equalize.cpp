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
    string a;
    cin>>a;
    int ctn=0;
    int ans=0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]!=a[i+1]){
            ctn++;
        }
    }
    if(ctn%2==0){
        ans=ctn/2;
    }else{
        ans=ctn/2;
        ans++;
    }
    cout<<ans<<'\n';
    
   }
    
     
     
    return 0;
}
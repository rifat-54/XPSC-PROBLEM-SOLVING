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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int ctn=0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]){
            ctn++;
        }
    }

    if(ctn>1) cout<<"No\n";
    else cout<<"YES\n";
    
    
   }
    
     
     
    return 0;
}
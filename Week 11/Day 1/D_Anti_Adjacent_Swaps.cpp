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
     bool flag=true;
    for (int i = 1; i < n-1; i++)
    {
        if(a[i]<a[i-1] && a[i]<a[i+1]){
            flag=false;
            break;
        }else if(a[i]>a[i-1] && a[i]>a[i+1]){
            flag=false;
            break;
        }
    }

    if(n==2 && a[0]>a[1]){
        flag=false;
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    
    
   }
    
     
     
    return 0;
}
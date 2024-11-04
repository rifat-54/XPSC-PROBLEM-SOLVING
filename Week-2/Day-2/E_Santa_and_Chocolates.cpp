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
  long long  int n,x;
    cin>>n>>x;
   long long int sum=0;
    for (int i = 0; i < n; i++)
    {
       long long int a;
        cin>>a;
        sum+=a;
    }

   long long int dif=sum/n;
   long long int mod=sum%n;
    if(dif>=1) cout<<"YES\n";
    else cout<<"NO\n";
    
   }
    
     
     
    return 0;
}
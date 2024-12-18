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
    vector<long long >v(n);
    for (int i = 0; i < n; i++)
    {
        
        cin>>v[i];
    }
    
    long long ans=0;
    
    ans=v[0];
    
    long long ctn=1;
    for (int i = 1; i <n; i++)
    {
        
        long long need=v[i]-ctn;
        
        if(need>0){

         ans+=need;
        }else{
            break;
        }
         ctn++;
        
    }

    cout<<ans<<'\n';
    

   }
    
     
     
    return 0;
}
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
    long long k,l1,r1,l2,r2;
    cin>>k>>l1>>r1>>l2>>r2;
    long long ans=0;
    for (int i =l1; i <=r1; i++)
    {
        long long d=0;
        while (1)
        {
            long long cur=i*(pow(k,d));
            if(cur>=l2 && cur<=r2){
                ans++;
                d++;
            }else if(cur<=l2){
                d++;
                continue;
            }else{
                break;
            }
            
        }
        
    }

    cout<<ans<<'\n';
    
   }
    
     
     
    return 0;
}
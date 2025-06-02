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
    long long x=0,y=0;
    long long p=0;
    while (n--)
    {
            y=y-pow(2,p);
        if(n>0){
        x=x+pow(2,p);
        }
        p++;
    }

    long long ans=x-y;
    cout<<ans<<"\n";
    
   
   }
    
     
     
    return 0;
}
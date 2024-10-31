#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b,c;
   cin>>a>>b>>c;
   
   int j=1;
   int ans=-1;
   for (int i = a; i <=b; i++)
   {
        if(c*j>=a && c*j<=b)
        {
            ans=c*j;
            break;
        }else if(c*j>b)
        {
            break;
        }
        else{
            j++;
        }
   }
    
     cout<<ans<<endl;
     
    return 0;
}
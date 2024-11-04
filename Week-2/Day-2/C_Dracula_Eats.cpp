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
    int div=n/7;
    int mod=n%7;
    if(mod>=2){
        div++;
    }
    cout<<div<<endl;

   }
    
     
     
    return 0;
}
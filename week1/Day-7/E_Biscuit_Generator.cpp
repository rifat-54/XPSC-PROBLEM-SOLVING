#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b,t;
   cin>>a>>b>>t;
   int sum=0;
   int n=a;
   while (n<=t)
   {
     n+=a;
     sum=sum+b;

   }
   cout<<sum<<endl;
    
     
     
    return 0;
}
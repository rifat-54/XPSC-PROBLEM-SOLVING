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
       int n,k;
       cin>>n>>k;
       
       int total=n*k;
       int h=total/60;
       int m=(total%60);

       cout<<h<<" "<<m<<"\n";
   }
    
     
     
    return 0;
}
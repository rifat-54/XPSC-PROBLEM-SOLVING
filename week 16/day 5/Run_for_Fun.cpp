#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b;
   cin>>a>>b;
   if(b%a==0){
     if(b/a==0){
        cout<<0<<'\n';
     }else{
        cout<<(b/a)-1<<'\n';
     }
   }else{
    cout<<(b/a)<<'\n';
   } 
     
     
    return 0;
}
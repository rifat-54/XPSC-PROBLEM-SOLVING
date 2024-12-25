#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a;
   cin>>a;
   if(a<=2){
    cout<<1<<'\n';
   }else if(a>2 && a<7){
    cout<<2<<'\n';
   }else if(a>6) {
    cout<<3<<'\n';
   } 
     
     
    return 0;
}
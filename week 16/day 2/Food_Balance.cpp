#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int aa=abs(a-b);
   int bb=abs(c-d);
   if(aa<bb){
    cout<<"First\n";
   } else if(aa>bb){
    cout<<"Second\n";
   }else{
    cout<<"Both\n";
   }
     
     
    return 0;
}
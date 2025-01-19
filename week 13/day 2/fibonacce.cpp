#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int  t;
   cin>>t;
   while (t--)
   {
    int a,b,d,e;
    cin>>a>>b>>d>>e;
    int ctn=0;
    int c=e-d;
    int c2=d-b;
    if(c==c2){
        ctn++;
        ctn++;
    }else{
        ctn++;
    }
    if(a+b==c || a+b==c2){
        ctn++;
    }

    cout<<ctn<<'\n';
   }
   
     
     
    return 0;
}
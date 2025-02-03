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
    int need=0;
    if(n%4==0){
        int c=n/4;
        need=c*c;
    }else{
        int a=n/4;
        int b=a+1;
        int total=(a*2)+(b*2);
        if(total<=n){
            need=a*b;
        }else{
            need=a*a;
        }
    }

    cout<<need<<'\n';
   }
    
     
     
    return 0;
}
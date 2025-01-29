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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int suma=a*b;
    int sumb=c*d;
    int total=suma+sumb;
    int sq=sqrt(total);
    // cout<<sq<<'\n';
    if(sq*sq!=total){
        
        cout<<"No\n";
    }else{
        cout<<"Yes\n";
    }
   }
    
     
     
    return 0;
}
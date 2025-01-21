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
    int ctn=0;
    if(n%4==0){
        ctn=n/4;
    }else{
        ctn=n/4;
        ctn++;
    }
    cout<<ctn<<'\n';
   }
    
     
     
    return 0;
}
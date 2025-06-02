#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   cin>>n;
   int a=n/3; 
   int b=3*a;
   int c=3*(a+1);
    
   if(n-b<=c-n){
    cout<<b;
   }else{
    cout<<c;
   }
     
     
    return 0;
}
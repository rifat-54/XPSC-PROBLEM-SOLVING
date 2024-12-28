#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    return __gcd(a,b);
}
int LCD(int a,int b){
    // return ((a*b)/__gcd(a,b));
    return ((a/__gcd(a,b))*b);
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b;
   cin>>a>>b;

   cout<<GCD(a,b)<<'\n';
   cout<<LCD(a,b)<<'\n';

     
     
    return 0;
}
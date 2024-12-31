#include<bits/stdc++.h>
#define ll ll64_t ;
using namespace std;

long long GCD(long long a,long long b){
    return __gcd(a,b);
}

long long LCD(long long a,long long b){
    // return ((a*b)/__gcd(a,b));
    return ((a/__gcd(a,b))*b);
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   long long a,b;
   cin>>a>>b;

   cout<<GCD(a,b)<<'\n';
   cout<<LCD(a,b)<<'\n';

     
     
    return 0;
}
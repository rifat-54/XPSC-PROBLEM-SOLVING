#include<bits/stdc++.h>
using namespace std;
long long LCM(long long a,long long b){
    return ((a/__gcd(a,b))*b);
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   long long n,a,b,p,q;
   cin>>n>>a>>b>>p>>q;

    long long ctna=(n/a)*p;
    long long ctnb=(n/b)*q;
    long long overlap=(n/LCM(a,b));
    long long ans=ctna+ctnb-(overlap*(p+q))+overlap*max(p,q);
    cout<<ans<<'\n';
     
     
    return 0;
}
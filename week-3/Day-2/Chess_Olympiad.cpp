#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   float a,b,c;
   cin>>a>>b>>c;
   
   float teamA=0;
   float teamB=0;
   int ramaing=4-a-b-c;
   teamA=a+b*.5+ramaing;
   teamB=c+b*.5;
     if(teamA>teamB) cout<<"Yes\n";
     else
     cout<<"No\n";
     
    return 0;
}
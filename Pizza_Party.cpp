#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b;
   cin>>a>>b;
   int total=(a+1)*4+b*3;
   int n=total/8;
   if(total%8!=0){
    n++;
   } 
   cout<<n<<"\n";
     
     
    return 0;
}
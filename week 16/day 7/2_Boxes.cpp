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
    int a,b,c;
    cin>>a>>b>>c;
    int ctn=0;
    if(abs(a-b)!=c){
        int aa=abs(a-b);
        int bb=abs(c-aa);
        if(bb%2!=0){
            ctn=-1;
        }else{
            ctn=bb/2;
        }
    }

    cout<<ctn<<"\n"; 
   }
    
     
     
    return 0;
}
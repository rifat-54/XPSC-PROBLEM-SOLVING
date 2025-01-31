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
     
    bool ok=false;
    int w,h;
    if(a==c){
        w=a;
        h=b+d;
        if(w==h){
            ok=true;
        }
    }else if(a==d){
        w=a;
        h=b+c;
        if(w==h){
            ok=true;
        }

    }else if(b==c){
        w=b;
        h=a+d;
        if(w==h){
            ok=true;
        }
    }else if(b==d){
        w=b;
        h=a+c;
        if(w==h){
            ok=true;
        }
    }
   
    
    
    if(ok){
        
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
   }
    
     
     
    return 0;
}
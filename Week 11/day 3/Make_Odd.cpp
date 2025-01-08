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
    string a,b;
    cin>>a>>b;
    int s=0;
    int d=0;
    for (int i = 0; i < n; i++)
    {
        
        if(a[i]=='1' && b[i]=='1'){
            s++;
        }else if(a[i]=='1' && b[i]=='0'){
            d=1;
        }else if(a[i]=='0' && b[i]=='1'){
            d=1;
        }
    }

    if(s%2==1){
        cout<<"YES\n";
    }else if(d==1){
         cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
   }
    
     
     
    return 0;
}
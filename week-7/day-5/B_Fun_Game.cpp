#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a;
   cin>>a;
   while (a--)
   {
       int n;
       cin>>n;
       string s,t;
       cin>>s>>t;
       if(s==t){
        cout<<"YES\n";
        continue;
       }
       bool flag=false;
       for (int i = 0; i < n; i++)
       {
         if(t[i]=='0' && s[i]=='1'){
            flag=true;
            break;
         }else if(t[i]=='1' && s[i]=='1'){
            flag=true;
            break;
         }else if(t[i]=='1' && s[i]=='0'){
            break;
         }
       }

       if(flag) cout<<"YES\n";
       else cout<<"NO\n";
       
   }
    
     
     
    return 0;
}
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
    string s;
    cin>>s;

    for(auto c:s){
        if(c=='1'){
            cout<<0;
        }else{
            cout<<1;
        }
    }
    cout<<'\n';

   }
    
     
     
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans+='z';
    }

    if(s>=ans){
        cout<<-1<<"\n";
    }else{
        cout<<ans<<"\n";
    }
    
   } 
     
     
    return 0;
}
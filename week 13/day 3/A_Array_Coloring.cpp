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
    int ctn=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if(a%2!=0){
            ctn++;
        }
    }
    if(ctn==1){
        cout<<"NO\n";
    }else if(ctn%2!=0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
    
   }
    
     
     
    return 0;
}
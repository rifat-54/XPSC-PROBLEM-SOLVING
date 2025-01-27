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
     int n,d;
     cin>>n>>d;
     vector<int>v(n);
     int ctn=0;
     int gun=1;
     for (int i = 0; i < n; i++)
     {
        int a;
        cin>>a;
        if(gun==1 && a>d){
            gun=2;
            ctn++;
        }
        if(gun==2 && a<=d){
            gun=1;
            ctn++;
        }
        
     }

     cout<<ctn<<'\n';
     
   }
    
     
     
    return 0;
}
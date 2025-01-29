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
     long long sum=1;
     int ctn=0;
     long long mn=INT_MAX;
     for (int i = 0; i < n; i++)
     {
        long long a;
        cin>>a;
        mn=min(mn,a);
        if(a==0){
            ctn++;
            sum=sum*1;
        }else{

        sum=sum*a;
        }
     }

     if(ctn==1){
        cout<<sum<<'\n';
     }else if(ctn>1){
        cout<<0<<'\n';
     }else{
        sum=(sum/mn)*(mn+1);
        cout<<sum<<'\n';
     }

    
     
     
   }
   

     
     
    return 0;
}
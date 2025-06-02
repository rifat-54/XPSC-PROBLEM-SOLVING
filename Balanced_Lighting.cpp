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
    int ctn1=0,ctn2=0,ctn0=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if(a==1) ctn1++;
        if(a==2) ctn2++;
        if(a==0) ctn0++;
    }

    if(n%2){
        cout<<"No\n";
    }else{
        if(ctn1==ctn2){
            cout<<"Yes\n";
        }else if(ctn1>ctn2){
            int need=ctn1-ctn2;
            int c=ctn0-need;
            if(c>=0 && (c%2==0)){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
            
         }else{

            int need=ctn2-ctn1;
            int c=ctn0-need;
            if(c>=0 && (c%2==0)){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }

         }
    }
    
   } 
     
     
    return 0;
}
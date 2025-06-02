#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        int ctna1=0,ctna0=0,ctnb1=0,ctnb0=0,ctnc1=0,ctnc0=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='1') ctna1++;
            else ctna0++;

            if(b[i]=='1') ctnb1++;
            else ctnb0++;

            if(c[i]=='1') ctnc1++;
            else ctnc0++;

        }

         int ans=0;

       int total=ctna0+ctnb0+ctnc0;
      //  cout<<total<<"\n";

       if(total%n!=0){
         cout<<-1<<"\n";
       }else{
            int d=min(ctna0,ctna1);
            int e=min(ctnb0,ctnb1);
            int f=min(ctnc0,ctnc1);
            if(d<e){
              ans=d+min(e,f);
            }else{
              ans=e+min(d,f);
            }
            

            cout<<ans<<"\n";
       }

       
        
        

        
        
}


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
     
     
    return 0;
}
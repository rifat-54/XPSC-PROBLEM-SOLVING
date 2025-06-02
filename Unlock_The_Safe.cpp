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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int ctn=0;
    for (int i = 0; i < n; i++)
    {
        int fi=abs(a[i]-b[i]);
        // int se=abs((a[i]+10)-b[i]);
        // int th=abs((b[i]+10)-a[i]);

        // cout<<fi<<" "<<se<<" "<<th<<" "<<"\n";

        // int mn=min(fi,se);
        int mnn=min(fi,9-fi);

        ctn+=mnn;
    }

    // cout<<ctn<<"\n";

    if(ctn>k){
        cout<<"No\n";
    }else{
        // cout<<"Yes\n";
        int sum=abs(k-ctn);
        if(sum%2!=0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    } 
    
    
    

   }
    
     
     
    return 0;
}
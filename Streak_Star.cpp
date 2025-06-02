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
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int mx=0;int m;

    for (int i = 0; i < n; i++)
    {
        m=v[i];
        v[i]=m*k;
        int ctn=0;
        // cout<<v[i]<<" ";
        for (int j = 1; j < n; j++)
        {
            // cout<<v[j-1]<<" "<<v[j]<<"\n";
            if(v[j-1]<=v[j]){
                ctn++;
            }else{
                ctn=0;
            }
                mx=max(mx,ctn);
            //  cout<<ctn<<"\n";
        }
        // cout<<"\n";

        v[i]=m;
        // cout<<v[i]<<" ";
        // cout<<mx<<"\n";
        
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    cout<<mx+1<<"\n";
    
    
    
   }
    
     
     
    return 0;
}
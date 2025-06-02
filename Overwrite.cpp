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
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mn=INT_MAX;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        mn=min(mn,b[i]);
    }

    while (b[0]!=mn)
    {
        int val=b.back();
        b.pop_back();
        b.insert(b.begin(),val);
    }

    // for(int v:b){
    //     cout<<v<<" ";
    // }

    bool ok=false;
    int ctn=0;
    for (int i = 0; i < n-m; i++)
    {
        if(ok&&ctn<m){
            a[i]=b[0];
            ctn++;
        }

        if(a[i]>b[0]){
            a[i]=b[0];
            ok=true;
            ctn++;
        }

        
    }
    bool flag=false;
    int l;
    if(ok){
        int j=0;
        for (int i =n-m; i < n; i++)
        {
            a[i]=b[j];
            j++;
        }
        
    }else{
        int j=0;
        for (int i = n-m; i < n; i++)
        {
            if(a[i]>b[j]){
                
                flag=true;
                l=i;
                break;
            }else if(a[i]==b[j]){
                j++;
            }else{
                break;
            }
        }
        
    }

    if(flag){
        int j=0;
        for (int i =l-1; i < n; i++)
        {
            a[i]=b[j];
            j++;
        }
    }

    for(int val:a){
        cout<<val<<" ";
    }
    cout<<"\n";


    
    


    
    
   }
    
     
     
    return 0;
}
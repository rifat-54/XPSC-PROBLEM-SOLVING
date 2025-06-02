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
    int n,f,k;
    cin>>n>>f>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int fav=v[f-1];

    sort(v.rbegin(),v.rend());

    bool flag=false;

    for (int i = 0; i < k; i++)
    {
        if(v[i]==fav) flag=true;
    }

    bool ans=false;
    for (int i = k; i <n; i++)
    {
        if(v[i]==fav){
            ans=true;
        }
    }

    

    if(flag){
        if(ans){
                cout<<"MAYBE\n";
            }else{
                cout<<"YES\n";
            }
    }else{
        cout<<"NO\n";
    }


    
     
    

   }
    
     
     
    return 0;
}
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
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int last=v.back();

    int pos=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]>=last){
            pos=i;
            break;
        }
    }

    int ans=abs(n-pos)-1;

    cout<<ans<<"\n";
    
    
    
   }
    
     
     
    return 0;
}
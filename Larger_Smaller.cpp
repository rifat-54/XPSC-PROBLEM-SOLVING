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
    vector<int> v(n);
    int mx=INT_MIN;
    int mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
    }

    int dif=mx-mn;
    if(dif==0)
    cout<<dif<<"\n";
    else
    cout<<dif-1<<"\n";
    
   } 
     
     
    return 0;
}
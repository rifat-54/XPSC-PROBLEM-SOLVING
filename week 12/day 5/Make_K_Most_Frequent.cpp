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
    
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int ctn=0;
    int kctn=m[k];
    for (int i = 1; i <= 20; i++)
    {
        int singleCount=m[i];
        if(singleCount>kctn){
            ctn++;
        }

        // cout<<i<<"-> "<<m[i]<<"\n";
    }
    // cout<<'\n';

    cout<<ctn<<'\n';
    
    
   }
    
     
     
    return 0;
}
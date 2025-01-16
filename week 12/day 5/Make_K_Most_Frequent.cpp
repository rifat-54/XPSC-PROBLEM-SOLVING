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
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
        m[x]++;
    }
    int ctn=0;
    int kctn=m[k];
    for (int i = 0; i <n; i++)
    {

        int singleCount=m[a[i]];
        if(singleCount>kctn){
            m[a[i]]--;
            ctn++;
        }else{
            
        }

        // cout<<i<<"-> "<<m[i]<<"\n";
    }
    // cout<<'\n';

    cout<<ctn<<'\n';
    
    
   }
    
     
     
    return 0;
}
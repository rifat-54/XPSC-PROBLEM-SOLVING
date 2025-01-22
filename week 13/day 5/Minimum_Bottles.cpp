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
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    int need;
    if(sum%k!=0){
        need=sum/k;
        need++;
    }else{
        need=sum/k;
    }

    cout<<need<<'\n';
    
   }
    
     
     
    return 0;
}
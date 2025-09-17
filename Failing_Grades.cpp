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
    bool ans=true;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
        int av=sum/i;
        // cout<<"av-> "<<av<<"\n";
        if(av<40){
            ans=false;
            // break;
        }
    }

    if(ans)  cout<<"Yes\n";
    else cout<<"No\n";
    
   } 
     
     
    return 0;
}
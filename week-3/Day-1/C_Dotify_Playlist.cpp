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
    int n,k,l;
    cin>>n>>k>>l;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int length,lan;
        cin>>length>>lan;
        if(lan==l)
        {
            v.push_back(length);
        }

    }

        sort(v.begin(),v.end(),greater<int>());
    int sum=0;
    
    for(int val:v)
    {
        sum=sum+val;
        k--;
        if(k==0) break;
    }
   if(sum==0 || k>v.size())
   {
     cout<<-1<<'\n';
   }else{
    cout<<sum<<'\n';
   }
  
    
    
   }
    
     
     
    return 0;
}
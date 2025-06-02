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
     string a,b;
    cin>>a>>b;
    // cout<<a.size()<<" "<<b.size()<<"\n";
    bool flag=true;
    int l=a.size();int j=b.size()-1;
    vector<int> v(l);
    for (int i = a.size()-1; i >=0; i--)
    {
      if(b[j]==a[i]){
        j--;
        v[i]=1;
        if(j==-1) break;
      }
    }

  if(j!=-1){
    flag=false;
  }

  if(flag){
    long long sum=0;int cost=1;
    for (int i = 0; i < l; i++)
    {
      if(v[i]==1){
        cost++;
      }else{
        sum+=cost;
      }
    }
     cout<<sum<<"\n";

  }else{
    cout<<-1<<"\n";
  }


    
    
    
   }
   
  
     
     
    return 0;
}
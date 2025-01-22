#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   vector<int>ctn(21);
   for (int i = 0; i < n; i++)
   {
   
    cin>>a[i];
    ctn[a[i]]++;

   }

   int mxCtn=*max_element(ctn.begin(),ctn.end());
   if(ctn[k]==mxCtn){
    cout<<0<<'\n';
    return;
   }

   vector<int>ctn_pre=ctn;

   for (int i = 0; i < n; i++)
   {
    int mxCtn=*max_element(ctn_pre.begin(),ctn_pre.end());
    if(mxCtn==ctn_pre[k]){
        cout<<1<<'\n';
        return;
    }
    ctn_pre[a[i]]--;
   }
   vector<int>ctn_end=ctn;

   for (int i =n-1; i >=0; i--)
   {
    int mxCtn=*max_element(ctn_end.begin(),ctn_end.end());
    if(mxCtn==ctn_end[k]){
        cout<<1<<'\n';
        return;
    }
    ctn_end[a[i]]--;
   }


   cout<<2<<'\n';
   
   
}


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while (t--)
   {
   
   solve();
    
   }
    
     
     
    return 0;
}
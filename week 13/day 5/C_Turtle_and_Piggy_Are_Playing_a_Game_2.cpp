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

    sort(v.begin(),v.end());
    int mid;
    if(n%2==0){

     mid=n/2;
    }else{
        mid=n/2;
        // mid++;
    }
    cout<<v[mid]<<'\n';
    
   }
    
     
     
    return 0;
}
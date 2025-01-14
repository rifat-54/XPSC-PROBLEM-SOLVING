#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }

   for (int i = 0; i < k; i++)
   {
    int key;
    cin>>key;
    int l=0,r=n-1,mid;
    bool found=false;

    while (l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==key){
            found=true;
            break;
        }else if(key<v[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    if(found) cout<<"YES\n";
    else cout<<"NO\n";
    
   }
   
    
     
     
    return 0;
}
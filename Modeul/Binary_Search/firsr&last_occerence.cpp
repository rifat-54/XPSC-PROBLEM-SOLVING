#include<bits/stdc++.h>
using namespace std;

int first_occ(vector<int> v,int n,int k){
    int l=0,r=n-1,mid,ans=-1;

    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(v[mid]==k){
            ans=mid;
            r=mid-1;
        }else if(v[mid]<k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    return ans+1;
    
}


int last_occ(vector<int> v,int n,int k){
    int l=0,r=n-1,mid,ans=-1;

    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(v[mid]==k){
            ans=mid;
            l=mid+1;
        }else if(v[mid]<k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    return ans+1;
    
}


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n,q;
   cin>>n>>q;
   vector<int>v(n); 
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int key;
        cin>>key;
        cout<<key<<"- first-occ -> "<<first_occ(v,n,key)<<'\n';
        cout<<key<<"- first-occ -> "<<last_occ(v,n,key)<<'\n';
    }
    
    
    
     
     
    return 0;
}
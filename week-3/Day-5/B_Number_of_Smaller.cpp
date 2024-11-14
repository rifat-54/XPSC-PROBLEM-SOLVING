#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   for (int i = 0; i < m; i++)
   {
    cin>>b[i];
   }

    int ctn=0;
    int num=0;
   for (int j = 0; j < m; j++)
   {
    for (int i = num; i < n; i++)
    {
        if(a[i]<b[j])
        {
            ctn++;
            if(i==n-1) num=i+1;
        }else{
            num=i;
            break;
            
        }
    }
    cout<<ctn<<" ";
    
   }
   
    
     
     
    return 0;
}
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
    int a[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }

    int ctn=0;
    for (int i = 1; i <n; i++)
    {
        for (int j =i+1; j <=n; j++)
        {
            if(a[i]==a[j] && i<j) ctn++;
        }
        
    }

    cout<<ctn<<endl;
    
    
   }
    
     
     
    return 0;
}
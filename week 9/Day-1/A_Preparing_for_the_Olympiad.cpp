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
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int suma=0;
    int sumb=0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>b[i+1]){
            suma+=a[i];
            sumb+=b[i+1];
        }
    }

    suma+=a[n-1];
    int dif=suma-sumb;
    cout<<dif<<'\n';
    
    
   }
    
     
     
    return 0;
}
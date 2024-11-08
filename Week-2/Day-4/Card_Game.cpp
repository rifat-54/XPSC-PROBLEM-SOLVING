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
    int a,b;
    cin>>a>>b;
    int ctn=0;
    for (int  i = 1; i <= a; i++)
    {
        if(b!=i && (b+i)%2==0)
        {
            ctn++;
        }
    }
    cout<<ctn<<endl;
    
   }
    
     
     
    return 0;
}
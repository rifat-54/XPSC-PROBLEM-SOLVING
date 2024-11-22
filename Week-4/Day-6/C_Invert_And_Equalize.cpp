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
    string s;
    cin>>s;
    
    int ctn=0;
    for (int i = 0; i <n-1; i++)
    {
       
        if(s[i]=='1' && s[i+1]=='0')
        {
            ctn++;
        }
    }
    // if(s[n-2]=='0' && s[n-1]=='1') ctn++;
    
    cout<<ctn<<'\n';
    
   }
    
     
     
    return 0;
}
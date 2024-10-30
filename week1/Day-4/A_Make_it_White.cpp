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
       for (int i = 0; i < n; i++)
       {
            char x;
            cin>>x;
            s.push_back(x);
           
       }

       int bmin=INT_MAX;
       int bmax=INT16_MIN;
       int countb=0;

       for (int i = 0; i < n; i++)
       {
            if(s[i]=='B'){
            countb++;
            bmin=min(bmin,i);
            bmax=max(bmax,i);
         }
       }

        int countw=0;
        for (int i = bmin; i < bmax; i++)
        {
           if(s[i]=='W')
           {
            countw++;
           }
        }
        int ans=countb+countw;
        cout<<ans<<endl;
       
   }
    
     
     
    return 0;
}
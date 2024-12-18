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
    int l,r,k;
    cin>>l>>r>>k;
   int dif=INT_MAX;
   
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            int per=2*(i+j);
            int newdif=abs(k-per);
            // cout<<newdif<<'\n';
             if(newdif<dif){
                dif=newdif;
                
             }

        }
        
    }

    cout<<dif<<'\n';
    
   }
    
     
     
    return 0;
}
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
       string v;
       cin>>v;

        
        int ctn=0;

        for (int i = 0; i < n-1; i++)
        {
                
            if(v[i]=='1' && v[i+1]=='0' ){
                for (int j = i; j < n-1; j++)
                {
                    if(v[j]=='0' && v[j+1]=='1'){
                        ctn++;
                    }else if(v[j]=='1' && v[j+1]=='0'){
                        ctn++;
                    }
                }
                
            
            break;
            }

        }

        cout<<ctn<<'\n';
        
        
    }
    
     
     
    return 0;
}
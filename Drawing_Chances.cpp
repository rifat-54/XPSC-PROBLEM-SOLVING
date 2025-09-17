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
    int n,k;
    cin>>n>>k;
    int a=0,b=0;
    string s;
    cin>>s;
    for (int i = 0; i < k; i++)
    {
        
        if(s[i] =='1') a++;
        else b++;
    }

    // cout<<a<<" "<<b<<"\n";

    int need=n/2;

     if(n%2!=0 || a>need || b>need){
        cout<<"No\n";

        // cout<<"kes\n";
     }else{
        // cout<<"paise\n";

        
        if(a<need){
            int aned=need-a;
            int baki=n-k;
            if(baki>=aned){
                int nbad=baki-aned;
                if(nbad==0){

                    cout<<"Yes\n";
                }else{
                    cout<<"No\n";
                }
            }else{
                cout<<"No\n";
            }

        }else if(b<need){

            int bned=need-b;
            int baki=n-k;
            if(baki>=bned){
                int nbad=baki-bned;
                if(nbad==0){

                    cout<<"Yes\n";
                }else{
                    cout<<"No\n";
                }
            }else{
                cout<<"No\n";
            }

        }else{
            cout<<"Yes\n";
        }
     }
    
   }
    
     
     
    return 0;
}
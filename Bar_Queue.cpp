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
    int b=0;int g=0;
    for(char c:s){
        if((b)>(g*2)){
            break;
        }else{
            if(c=='G') g++;
            else b++;
        }
    }
    int total=b+g;
    cout<<total<<"\n";
   }
    
     
     
    return 0;
}
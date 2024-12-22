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
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    long long totalDay=0;
    long long total=a+b+c;
    long long day=n/total;
    if(day<1){
        if(a<n){
            totalDay++;
            if((a+b)<n){
                totalDay+=2;

            }else{
                totalDay++;
            }

        }else{
            totalDay++;
        }
    }else{
        totalDay=day*3;
       long long totalEx=total*day;
        if(totalEx<n){
            totalEx+=a;
            totalDay++;
            if(totalEx<n){
                totalEx+=b;
                totalDay++;
                if(totalEx<n){
                    totalDay++;
                }
            }
        }
    }

    cout<<totalDay<<'\n';



    

    

   

   

        
    
    
    

   }
    
     
     
    return 0;
}
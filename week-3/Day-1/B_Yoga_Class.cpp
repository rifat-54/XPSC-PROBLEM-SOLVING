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
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    if(a%2==0)
    {
        int evenNum=a/2;
        int evenSum=evenNum*c;
        int oddSum=a*b;
        ans=max(oddSum,evenSum);
    }else{
        int num=a-1;
         int evenNum=num/2;
        int evenSum=evenNum*c;
        int oddSum=num*b;
        ans=max(oddSum,evenSum)+b;
    }
    cout<<ans<<endl;
   }
    
     
     
    return 0;
}
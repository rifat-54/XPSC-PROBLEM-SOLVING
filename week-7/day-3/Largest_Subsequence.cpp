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
        int ctn1=0;
        int ctn2=0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                ctn1++;
            }
            if(s[i]=='b' && s[i+1]=='a')
            {
                ctn2++;
            }

        }
        
        if(ctn1==ctn2)
        {
            cout<<n<<'\n';
        }else{
            int ans1=n,ans2=n;
            char fist=s[0],last=s[n-1];
            for (int i = 0; i < n; i++)
            {
                if(s[i]!=fist){
                    break;
                }
                ans1--;
                
            }
            for (int i =n-1; i >0; i--)
            {
                if(s[i]!=last){
                    break;
                }
                ans2--;
                
            }
            cout<<max(ans1,ans2)<<'\n';
            
        }
        
    }
    
     
     
    return 0;
}
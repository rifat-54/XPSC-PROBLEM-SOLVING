#include<bits/stdc++.h>
using namespace std;
int maxB=(1LL<<15);
vector<int>allPlalimdorme;

bool isPalimdrome(int x){
    string s=to_string(x);
    int len=s.size();
    for (int i = 0; i < len/2; i++)
    {
        if(s[i]!=s[len-i-1]){
            return false;
        }
    }
    return true;
    
}

void makePalimdrome(){

    for (int i = 0; i < maxB; i++)
    {
        if(isPalimdrome(i)){
            allPlalimdorme.push_back(i);
        }
    }
    
      
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int t;
    cin>>t;
    makePalimdrome();
    int psize=allPlalimdorme.size();
    
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n),ctn(maxB+1);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            ctn[v[i]]++;
        }
        long long ans=n;

        for (int i = 0; i < n; i++)
        {
            for (int  j = 0; j < psize; j++)
            {
                int current=v[i]^allPlalimdorme[j];
                ans+=ctn[current];
            }
            
        }
        

        cout<<ans/2<<'\n';
        
    }
    
    
     
    return 0;
}
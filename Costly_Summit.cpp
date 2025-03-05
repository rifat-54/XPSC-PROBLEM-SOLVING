#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        string s;
        cin >> s;
        int a,b,c,d,e;
        for(char x:s){
            if(x=='A'){
                a++;
            }else if(x=='B'){
                b++;
            }else if(x=='C'){
                c++;
            }else if(x=='D'){
                d++;
            }else if(x=='E'){
                e++;
            }
        }

        int ans = 0;

        int in=1;
        if(a>0){
            if(a==1){
                if(in<c){
                    ans=ans+in;
                    in=2;
                }else{
                    ans=ans+c;
                }
            }else if(a==2){
                if(in<c){
                    ans=ans+in;
                    in=3;
                }else{
                    ans=ans+c;
                }
            }else if(a==3){
                if(in<c){
                    ans=ans+in;
                    in=6;
                }else{
                    ans=ans+c;
                }
            }else if(a==4){
                 if(in<c){
                    ans=ans+in;
                    in=12;
                }else{
                    ans=ans+c;
                }
            }else{
                ans=ans+c;
            }
        }
        if(b>0){
            if(b==1){
                if(in<c){
                    ans=ans+in;
                    in=2;
                }else{
                    ans=ans+c;
                }
            }else if(a==2){
                if(in<c){
                    ans=ans+in;
                    in=3;
                }else{
                    ans=ans+c;
                }
            }else if(a==3){
                if(in<c){
                    ans=ans+in;
                    in=6;
                }else{
                    ans=ans+c;
                }
            }else if(a==4){
                 if(in<c){
                    ans=ans+in;
                    in=12;
                }else{
                    ans=ans+c;
                }
            }else{
                ans=ans+c;
            }
        }








        ans = ans + 1;
        n--;
        if (c <= 2 && n > 0)
        {
            ans = ans + (n * c);
        }
        else
        {
            ans = ans + 2;
            n--;
            if (n > 0 && c <= 3)
            {
                ans = ans + (n * c);
            }
            else
            {
                ans = ans + 3;
                n--;
                if (n > 0 && c <= 6)
                {
                    ans = ans + (n * c);
                }
                else
                {
                    ans = ans + 6;
                    n--;
                    if(n>0){
                        ans=ans+(n*c);
                    }
                }
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}
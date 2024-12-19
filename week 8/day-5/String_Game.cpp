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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ctn=0;
        for(char c:s){
            if(c=='1'){
                ctn++;
            }
        }
        int j=min(ctn,(n-ctn));
        if(j%2==0){
            cout<<"Ramos\n";
        }else{
            cout<<"Zlatan\n";
        }
       
    }

    return 0;
}

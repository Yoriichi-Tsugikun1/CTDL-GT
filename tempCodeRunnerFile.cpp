#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int n; string s,s1;
        cin>>n>>s>>s1;
        if(s>s1) swap(s,s1);
        if(s==s1) cout << 0 << endl;
        else {
            long long dem = 0;
            while(s!=s1){
                int i = n-1;
                while(s[i]=='1'&&i>=0){
                    s[i]='0';
                    i--;
                }
                s[i]='1';
                dem++;
                //cout << s << endl;
            }
            cout << dem-1 << endl;
        }
    }
}
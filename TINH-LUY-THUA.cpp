#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long xuly(int a, long long b){
    if(b==0) return 1;
    if(b%2==0) return xuly(a,b/2)*xuly(a,b/2);
    else return a*xuly(a,b-1);
}
int main(){
    int t ; cin>>t;
    while(t--){
        int n;
        long long m;
        long long k;
        
        cin>>n>>m>>k;
        long long ans = xuly(n,m);
        cout<<ans<<endl;
        string s = to_string(ans);
        for(long long i=0;i<k;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
}

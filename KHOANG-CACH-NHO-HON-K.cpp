#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int tmp = upper_bound(a.begin(),a.end(),0)-a.begin();
        long long ans=0;
        for(int i=0;i<n;i++){
            int k=upper_bound(a.begin(),a.end(),a[i]-m)-a.begin();
            if(i-k>0) ans = ans + i-k;
        }
        cout << ans << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=n-1;i>=n-m;i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

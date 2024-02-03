#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        priority_queue<int, vector<int>, greater<int>> pq(a,a+n);
        long long sum=0;
        while(pq.size()>1){
            int vl1=pq.top(); pq.pop();
            int vl2=pq.top(); pq.pop();
            sum=sum+vl1+vl2;
            pq.push(vl1+vl2);
        }
        cout << sum << endl;
    }
}
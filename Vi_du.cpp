#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long long>> List[1000005];
long long n,m;
long long D[1000005];
long long F[1000005];
void DJ(){
    priority_queue<pair<long long,long long> , vector<pair<long long,long long>>,greater<pair<long ,long>>> Q;
    Q.push({0,1});
    for(int i=0;i<1000005;i++){
        D[i]=1e9;
        F[i]=0;
    }
    D[1]=0;
    F[1]=1;
    while(!Q.empty()){
        long long x = Q.top().second;
        long long y = Q.top().first;
        Q.pop();
        for(int i=0;i<List[x].size();i++){
            long long j = List[x][i].first;
            long long d_x_j = List[x][i].second;
            if(D[j]==D[x]+d_x_j) F[j]=F[j]+1;
            if(D[j]>D[x]+d_x_j){
                D[j] = D[x]+d_x_j;
                Q.push({D[j],j});
                F[j] = F[x];
            } 
        }
    }
    //for(int i=1;i<=n;i++) cout << F[i] << " ";
    cout << endl << D[n] << " " << F[n];
}
main(){
    cin>>n>>m;
    for(long long i=1;i<=m;i++){
        long long x,y,z; cin>>x>>y>>z;
        List[x].push_back({y,z});
        List[y].push_back({x,z});
    }
    DJ();
}
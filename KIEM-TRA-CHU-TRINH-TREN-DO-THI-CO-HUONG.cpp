#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
int check[1005]={0},kt;
int n,m;
void DFS(int u){
    check[u]=1;
    for(int i=0;i<List[u].size();i++){
        int j=List[u][i];
        if(check[j]==0) DFS(j);
        else if(check[j]==1) kt=1;
    }
    check[u]=2;
}
void chu_trinh(){
    for(int i=1;i<=n;i++){
        memset(check,0,sizeof(check));
        DFS(i);
        if(kt==1){
            cout <<"YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) List[i].clear();
        memset(check,0,sizeof(check));
        cin>>n>>m;
        kt=0;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            List[x].push_back(y);
        }
        chu_trinh();
    }
}
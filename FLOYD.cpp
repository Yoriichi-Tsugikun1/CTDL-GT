#include<bits/stdc++.h>
using namespace std;
int A[505][505];
int B[505][505];
int n,m,t;
void xuly(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(A[i][j]>A[i][k]+A[k][j]){
                    cout << i << " " << k << " " << j << endl;
                    A[i][j]=A[i][k]+A[k][j];
                    //B[i][j]=max(B[i][j],max(A[i][k],A[k][j]));
                }
            }
        }
    }
}
main(){
    cin>>n>>m>>t;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) A[i][j]=0;
            else A[i][j]=1e9;
        }
    }
    memset(B,0,sizeof(B));
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        //A[x][y]=A[y][x]=z;
        A[x][y]=z;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    xuly();
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }*/
    //cin>>t;
/*    while(t--){
        int u,v;
        cin>>u>>v;
        if(A[u][v]==1e9) cout << "-1" << endl;
        else cout << A[u][v] << " " << B[u][v] <<endl; 
    }*/
}

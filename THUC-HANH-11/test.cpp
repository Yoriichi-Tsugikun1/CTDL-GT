#include<bits/stdc++.h>
using namespace std;

main(){
    int n,k;
    cin>>n>>k;
    int a[k+1];
    for(int i=0;i<k;i++){
        cin>>a[i];
    }

    int A[n+5];
    for(int i=1;i<=n;i++) A[i]=0;

    for(int i=0;i<k;i++){
        if(A[a[i]]==0){
            for(int j=a[i]*2 ;j<=n ;j=j+a[i]){
                A[j]=1;
            }
            A[a[i]]=1;
        }
    }
    int  dem = 0;
    for(int i=1;i<=n;i++){
        if(A[i]==0) dem++;
    }
    cout<<dem;
}
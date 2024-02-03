#include<bits/stdc++.h>
using namespace std;
int a[1005];
int b[1005];
int n,k;

void in(int m){
	cout<<"[";
	for(int i=1;i<m;i++){
		cout<<a[b[i]]<<" ";
	}
	cout<<a[m];
	cout<<"] ";
}

void Try(int i,int sum){
	for(int j=b[i-1]+1;j<=n;j++){
		if(sum+a[j]<=k){
			b[i]=j;
			sum=sum+a[j];
			if(sum==k) in(i);
			else Try(i+1,sum);
			sum = sum-a[j];
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
        b[0]=0;
		sort(a,a+n+1);
		Try(1,0);
		cout<<endl;
	}
}
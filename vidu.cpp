#include<bits/stdc++.h>
using namespace std;
long luythua(int a, int i){
    if(i==0) return 1;
    if(i%2==0) return luythua(a,i/2)*luythua(a,i/2);
    else return a*luythua(a,i-1);
}
main(){
    int t; cin>>t;
    while(t--){
        int n; string s,s1;
        cin>>n>>s>>s1;
        reverse(s.begin(),s.end());
        reverse(s1.begin(),s1.end());
        
        if(s==s1){
            cout << "0" << endl;
        }
        else {
            long tong = 0,tong1=0 ;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    tong = tong + pow(2,i);
                }
                else if(s1[i]=='1'){
                    
                    tong1 = tong1 + pow(2,i);
                }
            }
            
            cout << abs(tong-tong1)-1 << endl;
        }
        
    }
}
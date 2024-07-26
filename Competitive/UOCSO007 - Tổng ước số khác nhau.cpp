#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long m,n,t=0;
        cin>>m>>n;
        for (int i=1;i<=sqrt(m);i++) {
            if (m%i==0) {
                if (m/i == i) {
                    if (n%i!=0) t=t+i;
                }
                else {
                    if (n%i!=0) t=t+i;
                    if (n%(m/i) !=0) t=t+m/i;
                }
            }
        }
        cout<<t<<endl;
    }
}
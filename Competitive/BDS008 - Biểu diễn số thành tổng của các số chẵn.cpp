#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
long long powerMod(long long n,long long k){
    if(k==0) return 1;
        long long x = powerMod(n,k/2);
    if(k%2==0) return x*x%mod;
        return n*(x * x % mod) % mod;
}
int main(){
    long long t , n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2==1) cout<<-1<<endl;
        else
        cout <<(powerMod(2 , (n/2)-1))<<endl;
    }
}
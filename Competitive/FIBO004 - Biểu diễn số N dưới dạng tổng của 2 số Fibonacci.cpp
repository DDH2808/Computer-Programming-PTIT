#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll F[101];
vector<ll> s;
void fibo(){
    F[0] =0 , F[1] = 1;
    for(int i=2;i<=100;i++){
        F[i] = F[i-1] + F[i-2];
    }
}
int bn(int l ,int r , ll x){
    while(l <= r){
        int m = ( l+r)/2;
        if(F[m ]==x) return 1;
        else if(F[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
void solve(ll n){
    ll *a , *b;
    for(ll i = 0 ; i <= n/2 ; i++){
        if(bn(0,100,i) ==1 && bn(0,100,n-i)==1){
            cout <<i<<" "<<n-i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    fibo();
    for(int i=0;i<=100;i++){
        s.push_back(F[i]);
    }
    int t;cin>>t;
    ll n;
    while(t--){
        cin >>n;
        solve(n);
    }
}
#include<bits/stdc++.h>
using namespace std;
long long F[101];
void Fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i=2 ; i<= 100; i++){
        F[i] = F[i-2] + F[i-1];
    }
}
int bn( int l , int r , int x){
    while(l<= r){
        int m = (l+r)/2;
        if(F[m]==x){
            return 1;
        }
        else if(F[m] > x) r = m -1;
        else l = m+1;
    }
    return -1;
}
int solve(int &n){
    n++;
    while(1){
        if(bn(0,100,n) == -1){
            return n;
        }
        else n++;
    }
}
int main(){
    Fibo();
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout <<solve(n)<<endl;
    }
}

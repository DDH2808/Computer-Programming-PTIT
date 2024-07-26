#include<bits/stdc++.h>
using namespace std;
long long F[55];
vector<long long>a;
void Fibo(){
    F[0] =0;
    F[1] =1;
    for(int i = 2 ; i<= 50 ; i++){
        F[i] = F[i-1] + F[i-2];
        if(F[i]%2==0) a.push_back(F[i]);
    }
}
int main(){
    Fibo();
    int t;cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        long long rs =0;
        for(int i =0;i<a.size();i++){
            if(a[i] <=n){
                rs+=a[i];
            }
        }
        cout <<rs<<endl;
    } 
}
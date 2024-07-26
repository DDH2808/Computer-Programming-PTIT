#include<bits/stdc++.h>
using namespace std;
long long A[40];
void catalan(){
    A[0]=1;
    for(int k=1;k<=31;k++){
        A[k]=0;
    for(int i=0;i<k;i++) 
        A[k]+=A[i]*A[k-1-i];
    }
} 
int main(){
    int t,n; cin >> t;
    while(t--){
        catalan();
        long long B[10000];
        cin >> n;
        int m = 0;
        B[m++]=A[n];
        for(int i=0;i<m;i++)
            cout<<B[i]<<endl;
    }
}
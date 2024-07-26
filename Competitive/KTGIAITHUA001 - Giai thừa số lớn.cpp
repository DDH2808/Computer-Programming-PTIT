#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
typedef unsigned long long ull;
ull t, res = 0;
void gthua(int n) {
    int GT[MAX]{1};
    int p = 0;
    for (int i = 2;i <= n;i++) {
        for (int j = 0;j <= p;j++) {
        t = i * GT[j] + res;
        res = t / 10000;
        GT[j] = t % 10000;
        if (j == p && res > 0) p++;
        }
    }
    cout << GT[p];
    for (int i = p - 1;i >= 0;i--) {
        if (GT[i] < 1000) cout << 0;
        if (GT[i] < 100) cout << 0;
        if (GT[i] < 10) cout << 0;
        cout << GT[i];
    } 
    cout << endl;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        gthua(n);
    }
    return(0);
}

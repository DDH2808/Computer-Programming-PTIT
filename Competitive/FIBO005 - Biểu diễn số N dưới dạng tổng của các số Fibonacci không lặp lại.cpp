#include <bits/stdc++.h>
using namespace std;
long long f[100], dp1[100];
long long dp2[100], v[100];
void fibonacci(){
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= 87; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}
int tong(int num){
    int cnt = 0;
    for (int i = 87; i > 0; i--) {
        if (num >= f[i]) {
            v[cnt++] = i;
            num -= f[i];
        }
    }
    reverse(v, v + cnt);
    dp1[0] = 1;
    dp2[0] = (v[0] - 1) / 2;
    for (int i = 1; i < cnt; i++) {
        dp1[i] = dp1[i - 1] + dp2[i - 1];
        dp2[i] = ((v[i] - v[i - 1]) / 2) * dp2[i - 1] + ((v[i] - v[i - 1] - 1) / 2) * dp1[i - 1];
    }
    return (dp1[cnt - 1] + dp2[cnt - 1]);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        fibonacci();
        int n;
        cin >> n;
        cout << tong(n) << endl;
    }
    return 0;
}

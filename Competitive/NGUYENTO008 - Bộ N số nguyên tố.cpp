#include<bits/stdc++.h>
using namespace std;
map<int, int> find1;
int snt[501],n,p,s,len;
bool kt;
bool check(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return false;
    return true;
}
void out(int ans[]) {
    kt = false;
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
void in(int x, int sum, int ans[], int t) {
    for (int i = x; i < len; i++) {
        ans[t] = snt[i];
        sum += snt[i];
        if (sum == s && t==n-1) out(ans);
        else if (sum < s && t < n-1) in(i + 1, sum, ans, t + 1);
        sum -= snt[i];
    }
}
int main(){
    for (int i = 2; i < 501; i++) {
        if (check(i)) {
            snt[len] = i;
            find1[i] = len;
            len++;
        }
    }
    kt = true;
    int ans[500];
    cin >> p >> n >> s;
    in(find1[p]+1, 0, ans, 0);
    if (kt) cout << -1 << endl;
    return 0;
}
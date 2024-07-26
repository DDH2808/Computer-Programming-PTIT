#include <bits/stdc++.h>
using namespace std;
int f[43];
void fibonacci(){
    f[0] = 1;
    f[1] = 2;
    for (int i = 2; i < 43; i++)
        f[i] = f[i - 1] + f[i - 2];
}
int solve(int x, int y, int t){
    if (y == 0) {
        if (x == 0)
            return 1;
        return 0;
    }
    int sum = 0;
    for (int i = t; i >= 0 and f[i] * y >= x; i--) {
        if (f[i] > x)
            continue;
        sum += solve(x - f[i], y - 1, i);
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while (t--){
    fibonacci();
        int n, k;
        cin >> n >> k;
        cout << solve(n, k, 42) << endl;
    }
    return 0;
}
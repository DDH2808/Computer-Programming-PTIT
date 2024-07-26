#include <bits/stdc++.h>
using namespace std;
int uocnt(int n) {
    if (n < 2) return 0;
    while (n % 2 == 0) {
        if (n == 2) return 2;
        n /= 2;
    }
    while (n % 3 == 0) {
        if (n == 3) return 3;
        n /= 3;
    }
    int temp = sqrt(n);
    for (int i = 5;i <= temp;i += 6) {
        while (n % i == 0) {
            if (n == i) return n;
            n /= i;
        }
        while (n % (i + 2) == 0) {
            if (n == i + 2) return n;
            n /= (i + 2);
        }
    }
    return n;
}
int main(){
    int t; cin >> t;
    while (t--) {
        int L, R; cin >> L >> R;
        int max = 0, ans = 0;
        for (int i = L;i <= R;i++) {
            if (uocnt(i) >= ans) {
                ans = uocnt(i);
                max = i;
            }
        }
        cout << max << endl;
    }
    return 0;
}

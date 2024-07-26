#include <bits/stdc++.h>
using namespace std;
int binhphuong (int n, int k){
    if (n == 0)
        return 1;
    if (k == 0)
        return 1;
    int mu = pow(2,k);
    if (n >= mu){
        return binhphuong(n - mu, k) + binhphuong(n, k - 1);
    }
    else
        return binhphuong(n, k - 1);
}
int main (){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n;
        k=log2(n);
        cout << binhphuong(n, k) << endl;
    }
    return 0;
}

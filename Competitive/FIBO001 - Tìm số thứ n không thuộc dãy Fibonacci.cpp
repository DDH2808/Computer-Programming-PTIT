#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n;
        int F1 = 1, F2 = 2, F3 = 3;
        while (n > 0){
            F1 = F2;
            F2 = F3;
            F3 = F1 + F2;
            n = n - (F3 - F2 - 1);
        }
        n = n + (F3 - F2 - 1);
        cout << F2 + n << endl;
    }
    return 0;
}
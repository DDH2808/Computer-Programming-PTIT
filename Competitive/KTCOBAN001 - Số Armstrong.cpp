#include<bits/stdc++.h>
using namespace std;

int socs(int k) {
    int so = 0;
    while (k > 0) {
        k = k / 10;
        so++;
    }
    return so;
}

bool isAmstrong(int k) {
    int tmp = k;
    int soMu = socs(k);
    int tong = 0;
    while (k > 0) {
        int t = k % 10;
        int mut = pow(t, soMu);
        tong += mut;
        k /= 10;
    }
    if (tong == tmp) return true;
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(isAmstrong(n))
            cout << "1" << endl;
        else
            cout<< "0" << endl;
    }
}
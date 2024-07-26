#include<bits/stdc++.h>
using namespace std;
int sohoanhao(int n){
    int sum = 0;
    if(n == 1)
        return sum;
    for(int i = 2; i <= sqrt(n); i++){
        if( n % i == 0){
            if(i == (n/i))
                sum+=i;
            else
                sum += i + n/i;
        }
    }
    return sum +1;
}
int main(){
    int t;
    cin >> t;
    while ( t--){
        int n;
        cin >> n;
        if(sohoanhao(n) == n)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
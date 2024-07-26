#include<iostream>
using namespace std;
bool capsocong(long long n, long long a[]){
    long long res = a[1] - a[0];
    for(int i = 1; i < n; i++){
        if(a[i] - a[i - 1] != res)
        return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a[100000];
        long long n;
        cin >> n;
        for(long i = 0; i < n; i++){
            cin >> a[i];
        }
        if(capsocong(n, a) == 1)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
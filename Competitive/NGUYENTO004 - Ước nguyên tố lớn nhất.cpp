#include<iostream>
#include<math.h>
using namespace std;
unsigned long long snt(unsigned long long n){
    unsigned long long max = 0;
    while(n % 2 == 0){
        max = 2;
        n >>= 1;
    }
    while(n % 3 == 0){
        max = 3;
        n /= 3;
    }
    for(unsigned long long i = 5; i <= sqrt(n); i += 6){
        while(n % i == 0){
            max = i;
            n /= i;
        }
        while(n % (i+2) == 0){
            max = i+2;
            n /= i+2;
        }
    }
    if(n > 4)
        return n;
    else return max;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long n;
        cin >> n;
        cout << snt(n) << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    bool dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false; 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= sum; j++){
            dp[i][j] = dp[i - 1][j]; 
            if (a[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - a[i - 1]];
        }
    } 
    int max = INT_MAX;
    for (int j = sum / 2; j >= 0; j--) {
        if (dp[n][j] == true) {
            max = sum - 2 * j;
            break;
        }
    }
    return max;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        } 
        cout << solve(a,n) << endl;
    }
    return 0;
}
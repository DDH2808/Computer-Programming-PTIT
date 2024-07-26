#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin >> s;
        int a, b;
        int res= -1;
        for(int i=0; i<s.size(); i++){
            for (int j=i; j<s.size(); j++){
                a = 0;
                b = 0;
                for (int k=i; k<=j; k++){
                    if (s[k] == '1')
                        b++;
                    if (s[k] == '0')
                        a++;
                }
                if (a-b > res)
                res= a-b;
            }
        }
        cout<< res << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
bool cmp (string s , string n){
    return s+n > n+s;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin >>n;
        vector<string>v;
        for(int i = 0 ; i <n;i++){
            string s;cin>>s;
            v.push_back(s);
        }
        sort(v.begin() , v.end() , cmp);
        for(int i = 0 ; i < v.size();i++){
            cout <<v[i];
        }
        cout <<endl;
    }
}
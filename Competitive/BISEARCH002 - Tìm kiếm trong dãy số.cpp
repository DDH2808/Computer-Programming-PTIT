#include<bits/stdc++.h>
using namespace std;
pair<int , int >a[1000006];
pair<int , int > b[1000006];
int bn(pair<int , int > a[] , int l , int r, int x){
    while(l<= r){
        int mid = ( l+ r)/2;
        if(a[mid].first ==x && a[mid-1].first != x) return a[mid].second;
        else if(a[mid].first < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
int main(){
    int n , m;
    cin>>n>>m;
    for(int i = 0 ; i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);
    for(int i =0 ; i < m;i++) cin >>b[i].first;
    for(int i =0 ; i < m ;i++){
        if(bn(a , 0 , n-1 , b[i].first) != -1){
            cout <<bn(a,0,n-1 , b[i].first)+1<<" ";
        }
        else cout <<0<<" ";
    }
}
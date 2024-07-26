#include<bits/stdc++.h>
using namespace std;
int main(){
     int t; cin>>t;
     while(t--){
         int X,Y,M; cin>>X>>Y>>M;
         int mua = M/X;//so hop mua 
         int vo=mua;//y vo hop duoc mot hop moi
         int ans=0;
         while(vo>=Y){
             vo=vo-Y+1;
             ans+=1;
         }
         int sum = ans+mua;
         cout<<sum<<endl;
     }
     return 0;
}

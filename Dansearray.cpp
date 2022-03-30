#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
int l;
cin>>l;
int a=0,b=0;
int ans=0;
for(int i=1;i<n;i++){


    int ne;
    cin>>ne;
    a=min(l, ne);
    b=max(l, ne);
    while(2*a<b){
        ans++;
        a=a*2;
    }
    l=ne;

}
cout<<ans<<endl;





}
int main(){
int t;
cin>>t;
while(t--){
    solve();



}





}

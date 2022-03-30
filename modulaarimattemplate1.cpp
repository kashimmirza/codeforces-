#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.14159265358979323846

const int M=1e9+7;
long long mod(long long x){
 return ((x%M+M)%M);

}
long long add(long long a, long long b){
  return mod(mod(a)+mod(b));

}
long long mul(long long a, long long b){
return mod (mod(a)*mod(b));
}
void solve(){
ll d, t, s;
cin>>d>>t>>s;
ll a = t*s;
if(a>=d){

    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;



}

void solvepre(){
int n;
cin>>n;
vector<ll>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<ll>pref(n+1);
for(int i=n-1;i>=0;i--){
    pref[i]= pref[i+1]+a[i];


}
ll ans=0;
for(int i=0;i<n;i++){

    ans = add(ans, mul(a[i], pref[i+1]));
}
cout<<ans<<endl;




}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    int t =1;
    for(int i=1;i<=t;i++){



        cout<<"CASE #"<<i<<" :  ";

        solvepre();
    }











}

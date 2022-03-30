
#include<bits/stdc++.h>
using namespace std;
const int  mod = 1e7;



long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
            long long r= b&1;
            cout<<r<<endl;
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int binpow(int b,int p)
{
    int r=1;
    while(p)
    {
        if(p&1)r=(r*b)%mod;
        b=(b*b)%mod;
        p/=2;
    }
    return r;
}


int binpow1(int  b, int  p) {
    int r=1;
    while(p){
        if(p&1)r= (r*b)%mod;
        b= (b*b)%mod;
        p = p/2;
    }
        return r;





}



int main(){
int fact[200005] = {0};
fact[0]=1;
for(int i=1;i<200005; i++){

    fact[i]= (fact[i-1]*i)%mod;

}
int t;
cin>>t;
while(t--){
        int n;
cin>>n;
int ans = fact[2*n];
cout<<binpow(2, mod-2);
ans = (ans*binpow1(2,mod-2))%mod;
cout<<ans<<endl;
}
}








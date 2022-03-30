#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
//long long int ans  = pow(2,n+1);
//cout<<ans-2<<endl;

long long ans =0;
long long k=2;
for(int i=1;i<=n;i++){
    ans = ans + k;
    k = 2*k;


}
cout<<ans<<endl;






}

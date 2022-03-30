#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long  a, b, c, d;
    cin>>a>>b>>c;
    long  long n= 2*abs(a-b);
    if(a>n||b>n||c>n){


        cout<<"-1"<<endl;
    }
    else{

    d=n/2 +c;

    while(d>n){
            d= d-n;

    }
    cout<<d<<endl;







}




}
}

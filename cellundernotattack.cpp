#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,m;
    cin>>n>>m;

    long long result;
    long long x, y;
    while(m--){
        cin>>x>>y;
        long long cnt= ((x*n)+(y*n))-(x*y);
        result=n*n-cnt;
        cout<<result<<" ";


    }









}

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a, b,c ,d;
    cin>>a>>b>>c>>d;
    int ma1= max(a, b);
    int minm1=min(a, b);
    int m2max=max(c, d);
    int ma2=min(c, d);
    if(ma1>ma2){

        cout<<"YES"<<endl;
    }

    else
        cout<<"NO"<<endl;



}






}

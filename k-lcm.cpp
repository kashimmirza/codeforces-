#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n,k;
while(t--){
    cin>>n>>k;
    if(n%2){

        cout<<1<<" "<<n/2<<" "<<n/2<<endl;

    }
    else if(n%2==0&&n%4){


        cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
    }
    else
        cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;



}






}

#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    long long  n;
    cin>>n;
    if(n==1){
        cout<<"1"<<" "<<"0"<<endl;


    }
    else if(n==2){
        cout<<"0"<<" "<<"1"<<endl;

    }
    else if(n%3==0){

        cout<<n/3<<" "<<n/3<<endl;
    }
    else {
        double re= ceil(n/3.0);

        double re1=floor(n/3.0);
        (long long ) re;
        (long long)re1;

        if(re+2*re1==n){
            cout<<(long long)re<<" "<<(long long)re1<<endl;
        }
        else{
            cout<<(long long)re1<<" "<<(long long)re<<endl;
        }






    }



}




}

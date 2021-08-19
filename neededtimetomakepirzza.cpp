#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){



    long long n;
    long long ma;


    cin>>n;

    if(n<=6){
        cout<<15<<endl;
    }

    else if(n%2==1){

        n=n+1;
   long long m =  (long long)n*2.5;
        cout<<m<<endl;
    }
    else{
            long long m= n*2.5;
            cout<<m<<endl;


    }
}






}
